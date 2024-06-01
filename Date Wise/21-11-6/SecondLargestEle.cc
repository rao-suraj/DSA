#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={1,7,4,2,8,4,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int Largest=INT_MIN;
    int SecLarg=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>Largest)
        {
            SecLarg=Largest;
            Largest=arr[i];
        }
        else if(arr[i]>SecLarg)
        {
            SecLarg=arr[i];
        }
    }
    cout<<SecLarg;
    return 0;
}