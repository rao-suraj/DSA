#include<iostream>

using namespace std;

int Sub(int arr[],int i,int Ans,int n)
{
    if(i==n-1)
    {
        return Ans;
    }
    Sub(arr,i+1,Ans+arr[i],n);
    Sub(arr,i+1,Ans,n);
}

int main()
{
    // int arr[]={1,2,3};
    // int n=3;
    // cout<<Sub(arr,0,0,n);
    int n=15432;
    while(n)
    {
        n=n^1;
        cout<<n;
    }
    return 0;
}