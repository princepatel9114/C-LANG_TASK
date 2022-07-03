#include<stdio.h>
int main()
{
	int n,n2;
	printf("Enter the value of -n : ");
	scanf("%d",&n);
	printf("Enter the value of n : ");
	scanf("%d",&n2);
	do 
	{
		printf("\t%d",n);
		n++;
	}while(n<=n2);
	return 0;

}