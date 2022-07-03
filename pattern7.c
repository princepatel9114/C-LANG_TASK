#include<stdio.h>
int main()
{
	int i,j,k=97;
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			if(i%2!=0)
			{
				printf("\t%c",k-32);
				
			}
			else
			{
				printf("\t%c",k);
			}
			k++;
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}