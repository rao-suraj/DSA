#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int curent=arr[0];
    int MaxSubArr=arr[0];
    for(int i=1;i<n;i++)
    {
        curent=max(arr[i],curent+arr[i]);
        MaxSubArr=max(curent,MaxSubArr);
    }
    cout<<MaxSubArr;
    return 0;
}
