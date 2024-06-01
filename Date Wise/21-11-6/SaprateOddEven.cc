#include<iostream>

using namespace std;

void Swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int main()
{
    int arr[]={1,2,5,6,3,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    while(i<j)
    {
        while(arr[i]%2==0) i++;
        while(arr[j]%2!=0) j--;
        if(i<j)
        {
            Swap(arr,i,j);
            i++;
            j--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}