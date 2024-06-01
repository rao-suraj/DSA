#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int count=1,ans=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            if(count==0)
            {
                count++;
            }
            else if(count==1)
            {
                count--;
            }
        }
        else{
            ans=ans+count;
            count=1;
        }
    }
    cout<<ans;
    return 0;
}