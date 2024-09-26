#include<stdio.h>
#include<math.h>
void main()
{
int con;
do{
printf("\nEnter a number\n");
int num;
scanf("%d",&num);

printf("Enter your choice \n 1.For factorial of the number \n 2. For checking the number is prime or not \n 3.For checking the number is odd or even \n 4.Exit\n");
  scanf("%d",&con);
  switch(con)
  {
	case 1:
		int fact=1;
		int n=num;
		while(n>0)
		{
		  fact =fact*n;
		  n--;
		}
		printf("%d is the factorial of the number",fact);
		break;
	case 2:
		 n=num;
		int isTrue=1;
		for(int i=2;i<sqrt(n);i++)
		{
			if(n%i ==0)
			{
				isTrue=0;
				break;
			}
		}
		if(isTrue)
		{
			printf("The number is not prime");
		}else{
			printf("The number is prime");
		}
		break;
	case 3:
	       if(num%2==0){
	       	printf("The number is even");
	       }else{
	       	printf("The number is odd");
	       }
	       break;
	case 4:	printf("Exiting");
		break; 
	default:
		printf("Invalid choice!!!!");
		break;	      				  
  
  }
  }while(con !=4);

}

