#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=10;
    int arr[]{2,2,2,5,5,5,6,7,7,7};
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(auto it:m)
    {
        cout<<it.first<<"="<<(it.second)<<endl;
    }
    return 0;
}