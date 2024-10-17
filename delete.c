#include<stdio.h>
void main()
{
int n;
printf("Enter the size of array\n");
scanf("%d",&n);

 int arr[n];
 printf("Enter the elements of array\n");
 for(int i=0;i<n;i++)
 {
   scanf("%d",&arr[i]);
  }
  printf("Previous array: \n");
  for(int i=0;i<n;i++)
  {
  	printf("%d ",arr[i]);
  }

    int k;
    printf("Enter the index to delete");
 
     scanf("%d",&k);
     for(int i=k;i<n-1;i++)
     {
     	arr[i]=arr[i+1];
     }
     arr[n-1]=0;
  printf("new array: \n");
  for(int i=0;i<n-1;i++)
  {
  	printf("%d ",arr[i]);
  }

   }
