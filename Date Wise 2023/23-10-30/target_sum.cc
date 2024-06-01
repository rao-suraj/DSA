#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int isPresent(int arr[],int rem,int idx,int n) {
    for(int i=idx;i<n;i++) {
        if(rem==arr[i]) {
            return i;
        }
    }
    return 0;
}

int main()
{
    int arr[100];
    int n,idx;
    int sum;
    cout<<"Enter the sum";
    cin>>sum;
    cout<<"Enter the length";
    cin>>n;

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++) {
        if(idx=isPresent(arr,sum-arr[i],i,n)) {
            cout<<i<<" "<<idx<<endl;
        }
    }
    return 0;
}