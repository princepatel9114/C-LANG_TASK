#include<stdio.h>

int main()
{
	int a=1,n,pro;
	
	printf("Enter the value of n:");
	scanf("%d",&n);
	while(a<=n)
	{
		pro=a*a;
		printf(" \t%d",pro);
		a++;
	}
	return 0;
}