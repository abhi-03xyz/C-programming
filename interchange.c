#include<stdio.h>
void merge1(int a[],int b[],int res[],int size1,int size2)
{
	int k=0,j=0;
	for(int i=0;i<size1+size2;i++){
		if(i%2==0 && k<size1)
		{
		  res[i]=a[k++];
		}else{
		 res[i]=b[j++];
		}
	}
	
}
void main()
{
	int a[]={1,3,5,7};
	int b[]={2,4,6,8,10};
	int size1=sizeof(a)/sizeof(a[0]);
	int size2=sizeof(b)/sizeof(b[0]);
	int res[size1+size2];
	merge1(a,b,res,size1,size2);
	for(int i=0;i<size1+size2;i++)
	{
	  printf("%d ",res[i]);
	}
}
