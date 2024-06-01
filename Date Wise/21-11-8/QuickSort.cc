#include<iostream>

using namespace std;

void Swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int Partition(int arr[],int Piv,int lw,int hi)
{
    int i=lw;
    int j=lw;
    while(i<=hi)
    {
        if(arr[i]<=Piv)
        {
            Swap(arr,i,j);
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    return j-1;
}

void QuickSort(int arr[],int lw,int hi)
{
    int Piv=arr[hi];
    int PivPoint=Partition(arr,Piv,lw,hi);
    if(lw<hi)
    {
        QuickSort(arr,lw,PivPoint-1);
        QuickSort(arr,PivPoint+1,hi);
    }
}

int main()
{
    int arr[]={2,8,1,3,4,5,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}