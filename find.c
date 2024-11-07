#include<stdio.h>
int findMinIndex(int *a,int size)
{
	int idx=0;
	int min=*(a+0);
	for(int i=1;i<size;i++)
	{
	  if(min>(*(a+i)))
	    {
	     min=*(a+i);
	     idx=i;
	    }
	}
	return idx;
}
void main()
{
	int a[]={4,2,5,9,3,1,0,8,7,6};
	int size=sizeof(a)/sizeof(a[0]);
	int *p;
	p=a;
	int idx=findMinIndex(p,size);
	printf("%d ",idx);
	
}
