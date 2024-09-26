#include<stdio.h>
void main()
{	//int n,m;
//	printf("Enter the number of rows\n");
//	scanf("%d",&n);
//	printf("Enter the number of columns\n");
//	scanf("%d",&m) ;int k=1;
//	for(int i=1;i<=n;i++)
//	{ 
//		for(int j=1;j<=i;j++)
//		{	
//		  printf("%d ",k);
//		k=k+1;
//		}
//		
//		  printf("\n");
//	}
//	 printf("\n");
//	for(int i=1;i<=n;i++)
//	{
//	   for(int j=m;j>=i;j--)
//	   {
//	     printf("*");
//	    
//	   }  
//	    
//	   printf("\n");
//	}   
	 printf("\n");
	 for(int i=1;i<=10;i++)
	 {
	   for(int j=1;j<=i;j++)
	   {
	     printf("*");
	   }
	   for(int k=1;k<=2*(10-i);k++)
	   {
	    printf(" ");
	   }
	   for(int l=1;l<=i;l++)
	   {
	    printf("*");
	   }
	    printf("\n");
	 }
	 //
	  for(int i=9;i>=1;i--)
	 {
	   for(int j=1;j<=i;j++)
	   {
	     printf("*");
	   }
	   for(int k=1;k<=2*(10-i);k++)
	   {
	    printf(" ");
	   }
	   for(int l=1;l<=i;l++)
	   {
	    printf("*");
	   }
	    printf("\n");
	 }
}


