#include<stdio.h>
int main()
{
	int i,j,k,n,sp=10;
	printf("Enter the value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++) 
	{
		for(k=1;k<=sp;k++)
		{
			printf(" ");
		}
		sp--;
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	sp+=2;
	for(i=n-1;i>=1;i--)
	{
		for(k=1;k<=sp;k++)
		{
			printf(" ");
		}
		sp++;
		for(j=i;j>=1;j--)
		{
			printf(" *");
		}
		printf("\n");
	}
}