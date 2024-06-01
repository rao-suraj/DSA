#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool subSetPre(int arr[],int W,int n,vector<int> &s)
{
    int t[n+1][W+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<W+1;j++)
        {
            if(j==0)
            {
                t[i][j]=true;
            }
            else if(i==0)
            {
                t[i][j]=false;
            }
        }
    }

    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<W+1;j++)
        {
            if(arr[i-1]<=j)
            {
                t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
            }
            else 
            {
                t[i][j]=t[i-1][j];
            }
        }
    }
    for(int i=0;i<=W/2;i++)
    {
        if(t[n][i]==true)
        {
            s.push_back(i);
        }
    }
    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<s[i];
    // }
    // cout<<endl;
    return t[n][W];
}

int main()
{
    int arr[]={2,1};
    int W=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> s;
    int a=subSetPre(arr,W,n,s);
    int mn=INT_MAX;
    for(int i=0;i<s.size();i++)
    {
        mn=min(mn,W-(2*s[i]));
    }
    cout<<mn;
    return 0;
}