#include<stdio.h>
void main()
{
int n;
printf("Enter the size of array\n");
scanf("%d",&n);

 int arr[n+1];
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
    printf("Enter the index to insert");
    scanf("%d",&k);
     printf("Enter the value ");
     int value;
     scanf("%d",&value);
     for(int i=n;i>k;i--)
     {
     	arr[i]=arr[i-1];
     }
     arr[k]=value;
  printf("new array: \n");
  for(int i=0;i<n+1;i++)
  {
  	printf("%d ",arr[i]);
  }

   }
