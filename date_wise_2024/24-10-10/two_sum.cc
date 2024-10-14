// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// tells if the given sum is present or not
void twoSum(int arr[],int size,int k) {
    int i=0,j= size-1;
    
    while(i<j) {
        if(arr[i] + arr[j] == k) {
            cout<<" YES";
            return;
        }
        if(arr[i]+arr[j]<k) {
            i++;
        } else {
            j--;
        }
    }
    cout<<"NO";
}

void twSum(int arr[],int size,int k) {
    unordered_map<int,int> mp;
    
    for(int i=0;i<size;i++) {
        if(mp.find(k-arr[i]) != mp.end()) {
            cout<<mp[k-arr[i]]<<" "<<i;
            cout<<"YES";
            return;
        }
        mp[arr[i]]=i;
    }
    cout<<"NO";
}

int main() {
    int arr[] = {1,2,3};
    int k=4;
    int size = sizeof(arr)/sizeof(arr[0]);
    
    twSum(arr,size,k);
    
    return 0;
}