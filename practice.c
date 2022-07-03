#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the no. of row:");
	scanf("%d",&n);

	i=1;
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			if(j>=n-(i-1))
			{
				printf(" *");
			}
			else
			{
				printf(" ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	i=n;
	while(i>=1)
	{
		j=1;
		while(j<=n)
		{
			if(j>=n-(i-2))
			{
				printf(" *");
			}
			else
			{
				printf(" ");
			}
			j++;
		}
		printf("\n");
		i--;
	}
}