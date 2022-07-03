#include <stdio.h>
int main()
{
    int i, j, k=1;	
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {    
            if(k % 2 != 0)
            {
                printf("1");            
			}
            else
            {
                printf("0");
            }
            k++;
        }
        printf("\n");
    }
    return 0;
}