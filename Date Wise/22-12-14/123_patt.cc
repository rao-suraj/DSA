#include<bits/stdc++.h>

using namespace std;
void swap(int arr[],int a,int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}


int main()
{
    int arr[]={0,1,0,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0,k=n-1,j=1;
    while(j<=k)
    {
        if(arr[j]==0)
        {
            swap(arr,i,j);
            i++;
        }
        else if(arr[j]==1)
        {
            j++;
        }
        else
        {
            swap(arr,j,k);
            k--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}