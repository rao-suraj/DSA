#include<iostream>

using namespace std;

int main()
{
    int arr[]={3,2,7,9,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=0;j<n-i;j++)
    //     {
    //         // cout<<j<<"  "<<j+1<<endl;
    //         // cout<<arr[j]<<"  "<<arr[j+1]<<endl;
    //         if(arr[j]>arr[j+1])
    //         {
    //             int temp=arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=temp;
    //         }
    //     }
    // }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-(i+1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}