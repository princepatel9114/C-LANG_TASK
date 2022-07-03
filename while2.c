#include<stdio.h>
int main()
{
	int a=1,n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	while(a<=n)
	{
		printf("\t %d ",a);
		a++;
	}
	return 0;
}