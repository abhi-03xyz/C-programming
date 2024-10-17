#include<stdio.h>
void main()
{
	int r1=0,r2=0,col1=0,col2=0;
	printf("enter the rows and colums of matrix_1:\n");
	scanf("%d",&r1);
	scanf("%d",&col1);
	int mat1[r1][col1];
	printf("\n");
	printf("enter the rows and colums of matrix_2:\n");
	scanf("%d",&r2);
	scanf("%d",&col2);
	int mat2[r2][col2];
	int res[r1][col2];
	for(int i=0;i<r1;i++)
	{
	  for(int j=0;j<col2;j++)
	  {
	   res[i][j]=0;
	  }
	}
	if(col1!=r2)
	{
		printf("matrix multiplication can't be possible");
	}else{
		printf("Enter the elements of 1st matrix: \n");
		for(int i=0;i<r1;i++)
		{
		 for(int j=0;j<col1;j++)
		 {
		   scanf("%d",&mat1[i][j]);
		 }
		} 
		
		printf("Enter the elements of 2nd matrix: \n");
		for(int i=0;i<r2;i++)
		{
		 for(int j=0;j<col2;j++)
		 {
		   scanf("%d",&mat2[i][j]);
		 }
		} 
		for(int i=0;i<r1;i++)
		{
		  for(int j=0;j<col2;j++)
		  {
		    for(int k=0;k<col1;k++)
		    {
		    	res[i][j] +=(mat1[i][k] * mat2[k][j]);
		    }
		  }
		}
		printf("Multiplied matrix:\n");
		for(int i=0;i<r1;i++)
		{
		  for(int j=0;j<col2;j++)
		  {
		    printf("%d ",res[i][j]);
		  }
		  printf("\n");
		}
	
	}
}
