#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// upper_bound is the last position where the value could be inserted.
// lower_bound is the first position where the value could be inserted. both have log(n) complixicity.

int main()
{
    int arr[]={1,2,3,4,7,8,9,10,15,17,20,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    int *pt;
    pt=upper_bound(arr,arr+n,15);
    cout<<*pt;
    return 0;
}