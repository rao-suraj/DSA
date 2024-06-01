#include<iostream>
#include<bits/stdc++.h>l

using namespace std;

int main()
{
    int arr1[]={5,10,15,5,10};
    int arr2[]={15,5,5,10,4};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    set<int> A1;
    set<int> A2;
    set<int> U;
    for(int i=0;i<n1;i++)
    {
        A1.insert(arr1[i]);
        U.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++)
    {
        A2.insert(arr2[i]);
        U.insert(arr2[i]);
    }
    int ans=(A1.size()+A2.size())-U.size();
    cout<<ans;
    return 0;
}