#include<stdio.h>
void calculate(int amount,int *f,int *tw,int *ten);
void main()
{
	int amount;
	printf("Enter the amount(multiple of 10): ");
	scanf("%d",&amount);
	int f=0,tw=0,ten=0;
	calculate(amount,&f,&tw,&ten);
	printf("Fifties: %d \n Twenties: %d \n Tens: %d",f,tw,ten);
	
	
}
void calculate(int amount,int *f,int *tw,int *ten)
{
	*f=amount/50;
	amount=amount %50;
	*tw=amount/20;
	amount=amount%20;
	*ten=amount/10;
	amount=amount%10;
}

