#include<iostream>

using namespace std;

int Bin_Ser(int arr[],int low,int high,int key)
{
    if(low>high)
    {
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    if(arr[mid]>=key)
    {
        high=mid-1;
        return Bin_Ser(arr,low,high,key);
    }
    else
    {
        low=mid+1;
        return Bin_Ser(arr,low,high,key);
    }
    
}

int Ser_In_Infi(int arr[],int key)
{
    int high=1;
    int low=0;
    while(key>arr[high])
    {
        low=high;
        high=high*2;
    }
    return Bin_Ser(arr,low,high,key);
}

int main()
{
    int arr[]={1,3,7,8,12,58,72};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=3;
    cout<<Ser_In_Infi(arr,key);
    return 0;
}