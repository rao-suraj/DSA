#include<iostream>

using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-i;j++)
        {
            if(arr[j-1]>arr[j])
                swap(arr[j-1],arr[j]);
        }
    }
}

int main()
{
    int n,l;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>l;
    bubbleSort(arr,n);
    cout<<arr[n-l];
    return 0;
}