#include<iostream>

using namespace std;

int main()
{
    int arr[]={-5,-4,0,1,2,10,11,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(arr[i]+arr[j]==0)
        {
            cout<<"True";
            return 0;
        }
        if(arr[i]+arr[j]>=0)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout<<"False";
    return 0;
}