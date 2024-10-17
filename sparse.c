#include<stdio.h>
void main()
{
	int r1=0,r2=0,col1=0,col2=0;
	printf("enter the rows and colums of matrix:\n");
	scanf("%d",&r1);
	scanf("%d",&col1);
	int mat1[r1][col1];
	printf("\n");
	int zero=0,positive=0;
	printf("Enter the elements of matrix: \n");
		for(int i=0;i<r1;i++)
		{
		 for(int j=0;j<col1;j++)
		 {
		   scanf("%d",&mat1[i][j]);
		   if(mat1[i][j]==0)
		   zero++;
		   if(mat1[i][j]>0)
		   positive++;
		 }
		} 
		
		if(zero>positive)
		{
		  printf("its a sparse matrix!!!");
		}else{
		 printf("NOT a sparse matrix!!!");
		}
		
		
	
}	
	

