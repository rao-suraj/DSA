#include<iostream>

using namespace std;

bool checkSubSet(int arr[],int W,int n)
{
    if(W==0)
    {
        return true;
    }
    if(n==0)
    {
        return false;
    }
    if(arr[n-1]<=W)
    {
        return checkSubSet(arr,W-arr[n-1],n-1) || checkSubSet(arr,W,n-1);
    }
    else
    {
        return checkSubSet(arr,W,n-1);
    }
}

int main()
{
    int arr[]={2,3,7,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int W=10;
    cout<<checkSubSet(arr,W,n);
    return 0;
}