#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        cout<<" "<<arr[j]<<" "<<arr[i];
        i++;
        j--;
    }
    return 0;
}