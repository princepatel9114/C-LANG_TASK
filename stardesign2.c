#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number of row:- ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n;j++)
		{
			if(j>=n-(i-1)&&j<=n+(i-1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=2*n;j++)
		{
			if(j>=n-(i-2)&&j<=n+(i-2))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}