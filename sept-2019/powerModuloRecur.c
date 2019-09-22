#include <stdio.h>

long int power(long int x,long int n)
{
        long int temp;
    if(n==0)
    return 1;

    temp=power(x,n/2);
    if(n%2==0)
    return temp*temp;
    else
    return temp*temp*x;

}

int main()
{
    long int x,n,p,res;
    scanf("%ld %ld %ld",&x,&n,&p);
    res=power(x,n);
    printf("%ld",res%p);
}
