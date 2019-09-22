#include <stdio.h>
#include <stdlib.h>

long long int factorial(long long int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*factorial(n-1);

}

int main()
{
   long long int n,fact=1,x;
   int i;
   scanf("%lld",&n);

   if(n<0)
   {
       printf("Invalid Input");
       exit(0);
   }
   x=factorial(n);
   printf("%lld",x);
}
