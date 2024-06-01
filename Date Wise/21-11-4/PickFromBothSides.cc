#include<iostream>

using namespace std;

int main()
{
    int arr[]={5,-2,3,1,2};
    int B=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    int count =0;
    int sum=0;
    while(i<j && count!=B)
    {
        if(arr[i+1]>arr[j-1])
        {
            i++;
            sum+=arr[i];
        }
        else
        {
            j--;
            sum+=arr[j];
        }
        count++;
    }
    cout<<sum;
    return 0;
}