#include<iostream>

using namespace std;

int UniqueElemint(int arr[],int n)
{
    int XorSum=0;
    for(int i=0;i<n;i++)
    {
        XorSum=XorSum^arr[i];
    }
    return XorSum;
}
int main()
{
    int arr[]={1,2,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<UniqueElemint(arr,n);
    return 0;
}