// Largest Sum array with give sum.


/*
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// get largest sub array with sum k
int getLargestSubArray(int arr[],int size,int k) {
    map<int ,int> mp;
    mp[0]=-1;
    int largest=0;
    int currentSum=0;
    int i=0;
    while(i<size){
        currentSum+=arr[i];
        if(mp.find(currentSum) == mp.end()) {
            mp[currentSum]=i;
        }
        if(mp.find(currentSum-k) != mp.end()) {
            largest=max(largest,i-mp[currentSum-k]);
        }
        i++;
    }
    return largest;
}

int main() {
    int arr[]={-1,1,-1,1,2,3,4,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    int k=2;
    cout<<getLargestSubArray(arr,size,k);
    return 0;
}

*/