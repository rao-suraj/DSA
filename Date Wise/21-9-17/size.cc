#include<iostream>

using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,56,7};
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr[0])<<endl;
    cout<<sizeof(arr)/sizeof(arr[0]);
    return 0;
} 