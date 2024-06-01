#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={0,0,1,1,1,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int> M;
    int CurSum=0;
    int Count=0;
    M.insert({0,1});
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            CurSum+=-1;
        }
        else
        {
            CurSum+=1;
        }
        if(M.find(CurSum)!=M.end())
        {
            Count+=M[CurSum];
            M.insert({CurSum,M[CurSum]+1});
        }
        else
        {
            M.insert({CurSum,1});
        }
    }
    cout<<Count;
    return 0;
}