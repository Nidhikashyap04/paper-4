#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void duplicates(int arr[],int n)
{
    int i;
    cout << "The repeating elements are:" << endl;
    for (i = 0; i < n; i++) {
        if (arr[abs(arr[i])] >= 0)
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        else
            cout << abs(arr[i]) << " ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    duplicates(arr,n);
}
