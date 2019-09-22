#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,n,h,result=1;
    int i;
    scanf("%lf %lf",&x,&n);

    h=n>0?n:-n;

    if(n==0 || x==1)
    {
        printf("1");
        exit(0);
    }
    else{
        for(i=1;i<=(int)h;i++)
        {
            result*=x;
        }
    }
    if(n>0)
    printf("%.3lf",result);
    else
    printf("%.3lf",1.0/result);
}

