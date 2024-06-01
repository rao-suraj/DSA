#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={1,2,3,4,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    cout<<s.size();
    return 0;
}