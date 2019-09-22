#include <stdio.h>
#include <stdlib.h>

double power(double x,int h)
{
    double temp;
    if(h==0)
    return 1;

    temp=power(x,h/2);
    if(h%2==0)
    return temp*temp;
    else
    return temp*temp*x;


}

int main()
{
    double x,h,result;
    int n;
    int i;
    scanf("%lf %d",&x,&n);

    h=n>0?n:-n;
   result=power(x,h);
   if(n>0)
   printf("%lf",result);
   else
   printf("%lf",1.0/result);
}
