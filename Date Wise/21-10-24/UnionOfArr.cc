#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    unordered_set<int> U;
    int arr1[]={5,10,15,5};
    int arr2[]={10,15,4};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    for(int i=0;i<n1;i++)
    {
        U.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++)
    {
        U.insert(arr2[i]);
    }
    for(auto it=U.begin();it!=U.end();it++)
    {
        cout<<*(it)<<endl;
    }
    return 0;
}