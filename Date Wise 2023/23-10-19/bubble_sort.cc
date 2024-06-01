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
    int arr[]={2,3,1,6,5,8};
    int n=6;
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<i;j++)
        {
            if(arr[j-1]>arr[j])
            {
                swap(arr,j-1,j);
            }
        }
    }
    for(auto it:arr)
    {
        cout<<it;
    }
    return 0;
}