#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int s = n;
    int i,j,a[n][n],pd[n],td[n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    for(i=0;i<n;i++)
    {
            pd[i] = a[i][i];
            td[i] = a[i][s = (s-1)];
    }
    for(i=0;i<n;i++)
    {
        printf(" %d ",pd[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",td[i]);
    }

}
