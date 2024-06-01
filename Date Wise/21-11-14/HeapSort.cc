#include<iostream>

using namespace std;

void Swap(int arr[],int i,int j)
{
    int Temp=arr[i];
    arr[i]=arr[j];
    arr[j]=Temp;
}

void hippfy(int arr[],int n,int i)
{
    int Large=i;
    int Lef=i*2;
    int Righ=i*2+1;
    if(Lef<n && arr[Lef]>arr[Large])
    {
        Large=Lef;
    }
    if(Righ<n && arr[Righ]>arr[Large])
    {
        Large=Righ;
    }
    if(Large!=i)
    {
        Swap(arr,i,Large);
        hippfy(arr,n,Large);
    }
}

void HeapSort(int arr[],int n)
{
    for(int i=n;i>1;i--)
    {
        Swap(arr,i,1);
        hippfy(arr,i-1,1);
    }
}

void BuildHeap(int arr[],int n)
{
    for(int i=n/2;i>0;i--)
    {
        hippfy(arr,n,i);
    }
}

int main()
{
    int arr[]={0,10,30,50,20,35,15};
    int n=sizeof(arr)/sizeof(arr[0])-1;

    BuildHeap(arr,n);

    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<endl;
    }

    HeapSort(arr,n);

    for(int i=0;i<=n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}