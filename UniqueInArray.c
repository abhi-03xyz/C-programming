#include<stdio.h>
void main()
{
int n;
printf("Enter the size of array\n");
scanf("%d",&n);
int arr[n];
printf("Enter the the elements of the array: \n");
for(int i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
printf("Number of unique elemnts in an array are :");

int c=0;//1 2 3 4 5
for(int i=0;i<n;i++)
{	int rep=0;
	for(int j=0;j<n;j++)
	{
	   if(arr[i]==arr[j])
	   {
	    rep++;
	   
	   }
	
	}	
	if(rep==1)
	{
	  c++;
	  printf("%d",arr[i]);
	}
}
//printf("%d",c);

}
