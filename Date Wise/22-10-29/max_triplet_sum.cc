#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void maxSum(int arr[],int n)
{
    int larr[n],rarr[n];
    larr[0]=arr[0];
    rarr[n-1]=arr[n-1];
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            larr[i]=max;
        }
        else
        {
            larr[i]=max;            
        }
    }
    max=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            rarr[i]=max;
        }
        else
        {
            rarr[i]=max;
        }
    }
    int maxSum=0;
    int sum=0;
    for(int run=1;run<n-1;run++)
    {
        sum=larr[run-1]+arr[run]+rarr[run+1];
        if(sum>maxSum && larr[run-1]>arr[run] && arr[run]>rarr[run+1])
        {
            maxSum=sum;
        }
    }
    cout<<maxSum;
}

int main()
{
    int arr[]={2,5,3,1,4,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxSum(arr,n);
    return 0;
}