#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n,a,b,temp,i;
    scanf("%lld",&n);
    a=0;
    b=1;
    if(n<0)
        printf("Invalid Input");
    else if(n==1)
        printf("0 ");
    else if(n==2)
        printf(" 1 ");
    else
    {
        printf("0 1 ");
        for(i=0;i<n-2;i++)
        {
            temp=a+b;
            printf("%lld ",temp);
            a=b;
            b=temp;
        }
    }
}
