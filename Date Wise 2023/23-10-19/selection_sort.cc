#include<iostream>

using namespace std;

void swap(int arr[] ,int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int main()
{
    int arr[]={3,5,7,2,7};
    int n=5;
    int smallest;
    for(int i=0;i<n-1;i++){
        smallest=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<smallest)
            {
                smallest=j;
            }
        }
        swap(arr,i,smallest);
    }
    for(auto it:arr)
    {
        cout<<it;
    }
    return 0;
}