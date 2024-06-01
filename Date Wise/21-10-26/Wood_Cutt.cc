#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int A[]={20, 15, 10, 17};
    int n=sizeof(A)/sizeof(A[0]);
    int B=8;
    int lw=0;
    int hg=0;
    int ans=0;
    for(int  i=0;i<n;i++)
    {
        hg=max(hg,A[i]);
    }
    // cout<<hg<<endl;
    int mid;
    while(lw<=hg)
    {
        mid=lw+(hg-lw)/2;
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if((A[j]-mid)>0)
            {
                sum+=(A[j]-mid);
            }
        }
        if(sum>=(long)B)
        {
            lw=mid+1;
            ans=max(ans,mid);
        }
        else
        {
            hg=mid-1;
        }
    }
      cout<<ans<<endl;
      cout<<mid;
    return 0;
}