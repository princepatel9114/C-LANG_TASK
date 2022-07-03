#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("enter the value : ");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
				count++;
				break;
		}
	}
	if(count==0&&num!=1)
	{
		printf("%d is prime number",num);
	}
	else
	{
		printf("%d is not prime number",num);
	}
	return 0;	
}