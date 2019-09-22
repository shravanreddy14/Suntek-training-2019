#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int recur(long int n,int i)
{
    if(i>=sqrt(n))
        return 1;
    else
    {
        if(n%i==0)
        return 0;
        else
        return recur(n,i+1);

    }

}

void main()
{
    long int n;
    int x;
    scanf("%ld",&n);
    if(n<2)
    {
        printf("Not a prime");
        exit(0);
    }

    x=recur(n,2);
    if(x==0)
    printf("Not a prime");
    else
        printf("Prime");

}
