#include<iostream>

using namespace std;


void Swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int PividPt(int arr[],int l,int h)
{
    int piv=arr[l];
    int i=l;
    int j=h;
    while(l<h)
    {
        while(arr[i]<=piv) i++;
        while(arr[j]>piv) j--;
        if(l<h)
        {
            Swap(arr,i,j);
        }
    }
    Swap(arr,j,l);
    return j;
}



void QuickSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int piv=PividPt(arr,l,h);
        QuickSort(arr,l,piv-1);
        QuickSort(arr,piv+1,h);
    }
}

int main()
{
    int arr[]={3,4,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}