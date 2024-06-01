#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int minCoin(int n,int arr[])
{
    if(n==0)
    return 0;
    int ans=INT_MAX;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        if(n-arr[i]>=0)
        {
            int subAns=minCoin(n-arr[i],arr);

            if(subAns!=INT_MAX && subAns+1<ans)
            {
                ans=subAns+1;
            }
        }
    }
    return ans;
}

int main()
{
    int n=18;
    int arr[]={7,5,1};

    // for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    // {
    //     cout<<i;
    // }
    int ans=minCoin(n,arr);
    cout<<ans;
    return 0;
}