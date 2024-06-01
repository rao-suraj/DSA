#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printSubarray(int n,int arr[])
{
    int cMax=0,aMax=INT_MIN;
    int pst,st,ed;
    for(int i=0;i<n;i++)
    {
        if(cMax==0 && (cMax+arr[i])>0)
        {
            pst=i;
        }
        cMax+=arr[i];
        if(cMax<0)
        {
            pst=0;
            cMax=0;
        }
        if(cMax>aMax)
        {
            st=pst;
            ed=i;
            aMax=cMax;
        }
    }
    // cout<<st<<"  "<<ed<<endl;
    cout<<aMax<<endl;
    
    for(int i=st;i<=ed;i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    printSubarray(n,arr);
    return 0;
}