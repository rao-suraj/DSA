#include<iostream>

using namespace std;

int main()
{
    int arr[]={};
    int n=sizeof(arr)/sizof(arr[0]);
    int lw=0;
    int hg=a
    while(lw<=hg)
    {
        int mid=lw+(hg-lw)/2;
        if(a[mid-1]<a[mid] & a[mid+1]>a[mid])
        {
            lw=mid+1;
        }
        else if(a[mid-1]>a[mid] & a[mid+1]<a[mid])
        {
            hg=mid-1;
        }
        else
        {
            return a[mid];
        }
        }
    return 0;
}