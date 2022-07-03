#include <stdio.h>
int main()
{
	int i=1,j=1;
	do 
	{
		do 
		{
			printf("%d",j);
			j++;
		}while(j<=5);
		printf("\n",i);
		i++;
	}while(i<=5);
	return 0;
}