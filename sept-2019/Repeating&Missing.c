#include <stdio.h>
#include <stdlib.h>

void printTwoElements(int arr[], int size)
{
    int i;
    printf("The repeating element is ");

    for (i = 0; i < size; i++) {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            printf(" %d ", abs(arr[i]));
    }

    printf("\nmissing element is ");
    for (i = 0; i < size; i++) {
        if (arr[i] > 0)
            printf("%d", i + 1);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printTwoElements(a, n);
    return 0;
}
