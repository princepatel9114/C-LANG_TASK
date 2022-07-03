#include <stdio.h>

int main()
{
	int i=65,j;
	while(i<=69)
	{
		for(j=65;j<=69;j++)
		{
			printf("%c",i);
		}
		printf("\n",i);
		i++;
	}
	return 0;
}