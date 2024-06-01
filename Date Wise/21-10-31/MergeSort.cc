#include<iostream>

using namespace std;



void Merge(int arr[],int i,int mid,int j,int n)
{
    int Ans[n];
    int k=i;
    int s=mid+1;
    int ind=i;
    while(k<=mid && s<=j)
    {
        if(arr[k]<arr[s])
        {
            Ans[ind]=arr[k];
            k++;
            ind++;
        }
        else
        {
            Ans[ind]=arr[s];
            s++;
            ind++;
        }
    }
    while(k<=mid)
    {
        Ans[ind]=arr[k];
        k++;
        ind++;
    }
     while(s<=j)
    {
        Ans[ind]=arr[s];
        s++;
        ind++;
    }
    for(int h=i;h<=j;h++)
    {
        arr[h]=Ans[h];
    }
}

void MergeSort(int arr[],int i,int j,int n)
{
    if(i<j)
    {
    int mid = (i+j)/2;
    MergeSort(arr,i,mid,n);
    MergeSort(arr,mid+1,j,n);
    Merge(arr,i,mid,j,n);
    }
}
int main()
{
    int arr[]={7,6,2,4,5,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0])-1;
    MergeSort(arr,0,n,n+1);
    for(int i=0;i<n+1;i++)
    {
        cout<<arr[i];
    }
    return 0;
}