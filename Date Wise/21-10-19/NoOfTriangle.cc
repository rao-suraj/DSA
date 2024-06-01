#include<iostream>

using namespace std;

int main()
{
    int arr[]={4,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ct=0;
    for(int i=n-1;i>=2;i--)
    {
        int c=i;
        int b=i-1;
        int a=0;
        while(a<b)
        {
            if(arr[a]+arr[b]>arr[c])
            {
                ct+=b-a;
                b--;
            }
            else
            {
                a++;
            }
            // cout<<"While";
        }
    }
    cout<<ct;
    return 0;
}