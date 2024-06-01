#include<iostream>

using namespace std;

void swap(int arr[],int l,int r)
{
    int temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
    // cout<<"SSSsz";
}

int PividPt(int arr[],int l,int r)
{
    int piv=arr[l];
    int i=l;
    int j=r;
    while(i<j)
    {
        while(arr[i]<=piv)
        {
            i++;
        }
        while(arr[j]>piv)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr,i,j);
        }
        // cout<<"Wh"<<endl;
    }
    swap(arr,j,l);
    // cout<<"PIV"<<endl;
    return j;
}

void QuickSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pivid=PividPt(arr,l,r);
        QuickSort(arr,l,pivid-1);
        QuickSort(arr,pivid+1,r);
        // cout<<"QQQQ";
    }
}

int main()
{
    int arr[]={4,6,2,5,7,9,1,6};
    int l=0;
    int r=(sizeof(arr)/sizeof(arr[0]))-1;
    QuickSort(arr,l,r);
    for(int i=0;i<=r;i++)
    {
        cout<<arr[i];
    }
    return 0;
}