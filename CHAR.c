#include<stdio.h>
int main()
{
	char a=65;
	while(a<=90)
	{
		printf("   %c - %c",a,a+32);
		a+=2;
	}
	return 0;
}