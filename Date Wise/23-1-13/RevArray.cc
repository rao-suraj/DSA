#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void revArray(int arr[],int st,int ed )
{
    while(st<ed)
    {
        int temp=arr[st];
        arr[st]=arr[ed];
        arr[ed]=temp;
        st++;
        ed--;
    }
}

void lftRot(int arr[],int n,int d)
{
    d=d%n;

    if(d==0)
    return;

    revArray(arr,0,d-1);
    revArray(arr,d,n-1);
    revArray(arr,0,n-1);
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=2;
    lftRot(arr,n,d);
    // revArray(arr,0,n-1);
    cout<<"Reach\n";
    // Print
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}