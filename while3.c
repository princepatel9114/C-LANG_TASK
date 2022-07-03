#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	do 
	{
		printf("\t %d",n);
		n--;
	}while(n>=1);
	return 0;
}