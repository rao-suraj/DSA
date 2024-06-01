#include<iostream>

using namespace std;

void swap(int arr[],int a,int j)
{
    int temp=arr[a];
    arr[a]=arr[j];
    arr[j]=temp;
}

int main()
{
    int arr[]={2,3,5,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(arr,i,min);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}