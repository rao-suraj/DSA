#include<bits/stdc++.h>

using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    
    for(int i=1;i<n;i++) {
        int j=i;
        while(arr[j-1]>arr[j] && j>0) {
            int temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}

int main() {
    vector<int> arr = {8,2,3,1,4,7};
    
    insertionSort(arr);
    
    for(auto it: arr){
        cout<<it<<" ";
    }
    
    return 0;
}