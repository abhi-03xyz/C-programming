#include<stdio.h>
void main()
{
	
	int a=10,b=20,c=30,d=40,e=50;
	int *arr[5]={&a,&b,&c,&d,&e};
	int sum=0;
	int max=-1,min=1000;
	for(int i=0;i<5;i++)
	{
	  sum += *arr[i];
	  if(*arr[i]>max)
	  {
	    max=*arr[i];
	  }
	  if(*arr[i]<min)
	  {
	    min=*arr[i];
	  }
	}
	printf("Sum:%d\nmax-elm:%d min-elm:%d",sum,max,min);
	
	
	
}
