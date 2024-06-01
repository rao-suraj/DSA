#include<iostream>

using namespace std;
int Bin_Ser(int arr[],int key,int low,int high)
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
        return Bin_Ser(arr,key,low,high);
    }
    else
    {
        low=mid+1;
        return Bin_Ser(arr,key,low,high);
    }
}



int Sort_n_Rot(int arr[],int key,int low,int high)
{
    int mid=(low+high)/2;
    if(arr[mid]==key)
    {
        return key;
    }
    else if(arr[low]<arr[mid])
    {
        if(key>=arr[low] & key<=arr[mid-1])
        {
            return Bin_Ser(arr,key,low,mid-1);
        }
        else
        {
            Sort_n_Rot(arr,key,mid+1,high);
        }
    }
    else
    {
        if(key>=arr[mid+1] & key<=arr[high])
        {
            return Bin_Ser(arr,key,mid+1,high);
        }
        else
        {
            return Sort_n_Rot(arr,key,low,mid-1);
        }
    }
}



int main()
{
    int arr[]={5,6,7,8,9,10,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]); 
    cout<<Sort_n_Rot(arr,2,0,n-1);
    return 0;
}