#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int val[],int W,int n)
{
    int t[n+1][W+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<W+1;j++)
        {
            if(j==0 || i==0)
            {
                t[i][j]=0;
            }
        }
    }
    for(int i=1;i<W+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(wt[j-1]<=i)
            {
                t[j][i]=max(val[j-1]+t[j-1][i-wt[j-1]],t[j-1][i]);
            }
            else
            {
                t[j][i]=t[j-1][i];
            }
        }
    }
    return t[n][W];
}
int main()
{
    int wt[]={1,3,4,5};
    int val[]={1,4,5,2};
    int W=7;
    int n=sizeof(wt)/sizeof(wt[0]);
    cout<<knapsack(wt,val,W,n);
    return 0;
}