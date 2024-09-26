#include<stdio.h>
void main()
{
int year;
printf("Enter the year to be checked: ");
scanf("%d",&year);
if((year%4==0 && year%100 !=0)|| year%400==0) 
printf("Its a leap year");
else
printf("Not a leap year");
}
