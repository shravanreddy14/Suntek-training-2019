#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long int n,fact=1;
   int i;
   scanf("%lld",&n);
   if(n<0)
   {
    printf("Enter a valid Number");
    exit(0);
   }
   else if(n==0 || n==1)
   {
    printf("%lld",fact);
    exit(0);
   }
   else
   {
       for(i=2;i<=n;i++)
        fact*=i;
   }
   printf("%lld",fact);
}
