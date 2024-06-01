#include<iostream>

using namespace std;

void Swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int Pivid(int arr[],int Piv,int lw,int hi)
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

int QuickSelection(int arr[],int k,int lw,int hi)
{
    int Piv=arr[hi];
    int PivPoint=Pivid(arr,Piv,lw,hi);
    if(PivPoint<k)
    {
        return QuickSelection(arr,k,PivPoint+1,hi);
    }
    else if(PivPoint>k)
    {
        return QuickSelection(arr,k,lw,PivPoint-1);
    }
    else
    {
        return PivPoint;
    }
}

int main()
{
    int arr[]={2,8,1,3,7,6,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int Idx=QuickSelection(arr,k-1,0,n-1);
    cout<<arr[Idx];
    return 0;
}