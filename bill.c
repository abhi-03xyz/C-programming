#include<stdio.h>
void main(){
	float num,bill;
	printf("Enter the units: ");
	scanf("%f",&num);
	if(num<=50)
	{
		bill=num*0.5;
	}else if(num>50 && num<=150){
	bill=50*0.5 + (num-50)*0.75;
	}else if(num>150 && num<=250)
	{
		bill=50*0.5 + 100*0.75 + (num-150)*1.20;
	}else{
		bill=bill=50*0.5 + 100*0.75 + 100*1.20 + (num-250)*1.50;
	}
	bill += bill*0.2;
	printf("Bill is %f",bill);
	
}  
