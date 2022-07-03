#include<stdio.h>

int main()
{
	int i,j,l;
	for(i=1;i<=5;i++)
	{
		l=65;
		for(j=1;j<=i;j++)
		{
			printf("\t%c",l++);			
		}
		printf("\n");
	}
	return 0;
}