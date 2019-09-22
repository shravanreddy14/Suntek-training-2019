#include <stdio.h>

int main()
{
    long int x,n,p,res=1;
    scanf("%ld %ld %ld",&x,&n,&p);
        for(int i=1;i<=n/2;i++)
        res*=x;

    if(n%2==0)
    {
        res=(res*res)%p;
    }
    else
    {
        res=(res*res*x)%p;
    }
    printf("%ld",res);
    return 0;
}
