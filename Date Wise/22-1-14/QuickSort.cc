#include<iostream>

using namespace std;

void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[],int l,int h)
{
    int pt=arr[l];
    int i=l;
    int j=h;
    while(i<j)
    {
        while(arr[i]<=pt) i++;
        while(arr[j]>pt) j--;
        if(i<j)
        {
            swap(arr,i,j);
        }
    }
    swap(arr,j,l);
    return j;
}

void QuickSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int part=partition(arr, l,h);
        QuickSort(arr,l,part-1);
        QuickSort(arr,part+1,h);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}