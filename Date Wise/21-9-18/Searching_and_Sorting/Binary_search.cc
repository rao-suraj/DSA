// recursively
#include<iostream>

using namespace std;

void BinarySer(int arr[],int key,int low,int high)
{
    if(low>=high)
    {
        if(arr[low]==key)
        {
            cout<<low<<endl;
            return;
        }
        else
        {
            cout<<"not found";
            return;
        }
    }
    int mid=(low+high)/2;
    if(arr[mid]==key)
    {
        cout<<mid<<endl;
        return;
    }
    if(key>arr[mid])
    {
        BinarySer(arr,key,mid+1,high);
    }
    else
    {
        BinarySer(arr,key,low,mid-1);
    }
}

int main()
{
    int arr[]={-4,-1,3,7,10,11};
    BinarySer(arr,11,0,5);
    return 0;
}