#include<iostream>

using namespace std;

int main()
{
    int arr[] = {3,2,1,5,4};
    int n=5;
    for(int i=1;i<n;i++)
    { 
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(auto it:arr){
        cout<<it;
    }
    return 0;
}