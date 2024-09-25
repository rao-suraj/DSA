#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    
    for(int i=n-1;i>=0;i--) {
        for(int j=0;j<=i-1;j++) {
            if(arr[j+1] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
}

int main() {
    vector<int> vec = {-1,3,4,2,6,1,0};
    
    bubbleSort(vec);
    
    for(auto it:vec) {
        cout<<it;
    }
    
    return 0;
}