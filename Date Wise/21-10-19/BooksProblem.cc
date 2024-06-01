#include<iostream>

using namespace std;

int BookAllotment(int arr[],int k)
{
    int lw=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int hg=sum;

    while(lw<hg)
    {
        int mid=(lw+hg)/2;
        Cheque(arr,k,mib);
    }
}

int Cheque(int arr,int k,int mid)
{
    int student=0;
    int sum=0;
    int i=0;
    while(i<n)
    {
        if(sum<=mid)
        {
        sum+=arr[i];
        }
        else
        {
            sum=0;
            student++;
        }
        i++;
    }
}

int main()
{
    int k=;
    int arr[]={};
    int n=sizeof(arr)/sizeof(arr[0]);

    return 0;
}