#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int minCoin(int arr[],int Remng,int n)
{
    int subSum;
    if(n==0)
    {
        return 0;
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(Remng-arr[i]>=0)
        {
            subSum=minCoin(arr,Remng-arr[i],n);
            if(subSum!=INT_MAX && subSum+1<ans)
            {
                ans=subSum+1;
            }
        }
    }
    return ans;
}
int main()
{
    int arr[]={1,5,7};
    int n=3;
    int tot=5;
    int ans=INT_MAX;
    cout<<ans;
    // cout<<minCoin(arr,6,n);
    return 0;
}