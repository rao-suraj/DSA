#include<iostream>

using namespace std;

int lis(int n,int a[])
{  
    int ans=1; 
    for(int i=0;i<=n-1;i++)
    {
        if(a[i]<a[n])
        {
            ans=max(ans,lis(i,a)+1);
        }
    }
    return ans;
}

int longestSubsequence(int n, int a[])
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=max(ans,lis(i,a));
    }
    return ans;
}


int main()
{
    int arr[]={2,3,4,7,8};
    int n;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=max(ans,lis(i,arr));
    }
    
    cout<<ans;
    return 0;
}