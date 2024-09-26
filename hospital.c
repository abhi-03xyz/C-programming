#include<stdio.h>
void main()
{

int n;
printf("Enter the number of patients \n");
scanf("%d",&n);
int p=1,rev=0;
while(p<=n)
{
	int days,dc,as,bill;
	printf("\nEnter the number of days stayed (patient %d)\n",p);
	scanf("%d",&days);
	printf("\nEnter the daily charge \n");
	scanf("%d",&dc);
	printf("\nEnter the number of additional services:(patient %d)\n",p);
	scanf("%d",&as);
	for(int i=1;i<=as;i++)
	{
		int c;
		printf("\nEnter the  cost of service %d: \n",i);
		scanf("%d",&c);
		bill=bill+c; 
	}
	bill = bill+(days*dc);
	rev =rev+bill;
	printf("Total bill of patient %d: %d\n",p,bill);
	p=p+1;
}
printf("Total rev: %d",rev);
}
