#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int knapsack(int wt[],int val[],int W,int n)
{
    if(n==0 || W==0)
    {
        return 0;
    }
    int t[n+1][W+1];
    memset(t,-1,sizeof(t));
    if(t[n-1][W-1]!=-1)
    {
        return t[n-1][W-1];
    }
    if(wt[n-1]<=W)
    {
        return t[n-1][W-1]=max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
    }else if(wt[n-1]>W)
    {
        return t[n-1][W-1]=knapsack(wt,val,W,n-1);
    }
}

int main()
{
    int n=4;
    int wt[]={1,3,4,5};
    int val[]={1,4,5,2};
    int W=7;
    // int t[n+1][W+1];
    // memset(t,-1,sizeof(t));
    cout<<knapsack(wt,val,W,n);

    return 0;
}