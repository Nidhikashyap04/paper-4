#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int minDistance(int arr[], int n, int x, int y)
{
    int i, j;
    int minimum = INT_MAX;
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if( (x == arr[i] && y == arr[j] ||
                y == arr[i] && x == arr[j]) &&
                minimum > abs(i-j))
            {
                minimum = abs(i-j);
            }
        }
    }
    return minimum;
}
int main()
{
   int n ;
   cin>>n;
   int arr[10000];
   for(int i=0;i<n;i++)
      cin>>arr[i];

    int x,y;
    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;
    int ans = minDistance(arr,n,x,y);
    cout<<"min. distance between" <<" "<<x<<" "<<"and"<<" "<<y<<" "<<"is"<<" "<<ans;
}
