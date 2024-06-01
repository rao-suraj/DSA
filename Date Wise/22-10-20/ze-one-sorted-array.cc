#include<iostream>

using namespace std;


int binSer(int arr[],int l,int r)
{
    int idx=-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        cout<<mid<<"    "<<arr[mid]<<endl;
        if(arr[mid]==1)
        {
            idx=mid;
            r=mid-1;
        }
        else 
        {
            l=mid+1;
        }
    }
    return idx;
}

int main()
{
    int arr[]={1,1,1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<binSer(arr,0,n-1);
    return 0;
}