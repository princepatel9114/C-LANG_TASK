#include <stdio.h>
int main()
{
    int i,j,row;
    printf("Enter the number of rows: ");
    scanf("%d",&row);  
    i=row;
	while(i>=1)
	{  
		j=1;
		while(j<=i)
		{
			printf(" ");
			j++;
		}
		j=i;
		while(j<=row)
		{
			printf("*");
			printf(" ");
			j++;
		}
		i--;
		printf("\n");
	}
	i+=2;
	while(i<=row)
	{
		j=1;
		while(j<=i)
		{   
			printf(" ");
			j++;
		}
		j=i;
		while(j<=row)
		{
			printf("*");
			printf(" ");
			j++;
		}
		i++;
		printf("\n");
	}
    return 0;
}