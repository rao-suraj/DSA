#include<iostream>

using namespace std;

int main()
{
    int arr[]={4,0,2,1,3};
    int n=5;
    for(int i=0;i<n;i++)
    {
        cout<<arr[arr[i]]<<" ";
    }
    return 0;
}