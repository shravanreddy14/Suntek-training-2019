#include<bits/stdc++.h>
using namespace std;
void printFirstRepeating(int arr[], int n)
{

    int min = -1;


    set<int> myset;


    for (int i = n - 1; i >= 0; i--)
    {

        if (myset.find(arr[i]) != myset.end())
            min = i;

        else
            myset.insert(arr[i]);
    }


    if (min != -1)
        cout << "The first repeating element is " << arr[min];
    else
        cout << "There are no repeating elements";
}


int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printFirstRepeating(arr, n);
}
