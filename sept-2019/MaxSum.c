#include<stdio.h>
void main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int max=0,cursum=0,start=0,end=0,s=0;

    for(i=0;i<n;i++)
    {
        cursum+=a[i];
        if(cursum>max)
        {
            max=cursum;
            start=s;
            end=i;
        }
        if(cursum<0)
        {
            cursum=0;
            s=i+1;
        }
    }
    printf("Max sum Is %d",max);
    printf("\n");
    for(i=start;i<=end;i++)
        printf("%d ",a[i]);
}
