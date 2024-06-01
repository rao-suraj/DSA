#include<iostream>

using namespace std;

int main()
{
      if(n==1)
        return 0;
        sort(arr,arr+n);
        int diff=arr[n-1]-arr[0];
        
        int small=arr[0]+k;
        int larg=arr[n-1]-k;
        int mi,mx;
        for(int i=1;i<n;i++)
        {
            mi=min(small,arr[i]-k);
            mx=max(larg,arr[i-1]+k);
            if(mi<0) continue;
            diff=min(diff,mx-mi);
        }
        return diff;
    return 0;
}