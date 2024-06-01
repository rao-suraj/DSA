#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    // char c=10;
    // c=(int)c+1;
    // cout<<(int)c;
    int arr[]={4,5,3,7,8,9,2,1,6};
    sort(arr,arr+9);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i];
    }
    return 0;
}