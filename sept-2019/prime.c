#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    long int n;
    scanf("%ld",&n);
    if(n<=1)
    {
        printf("Not a prime");
        exit(0);
    }
    else
    {
        for(int i=2;i<sqrt(n);i++)
        {
            if(n%i==0)
            {
                printf("Not a Prime");
                exit(0);
            }
        }
    }
        printf("Prime Number");
}
