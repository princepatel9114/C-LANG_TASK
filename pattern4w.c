#include<stdio.h>

int main()
{
	int i=1,j=1,k=1;
	while(i<=5&&j<=i)
	{
		i++;
		printf("\t%d",k++);
		j++;
	}
	return 0;
}