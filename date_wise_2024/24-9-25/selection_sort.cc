// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>

using namespace std;

void swap(vector<int>& vec, int i, int j) {
    int temp = vec[i];
    vec[i]=vec[j];
    vec[j]=temp;
}

void selectionSort(vector<int>& vec) {
    int n=vec.size();
    for(int i=0;i<=n-2;i++) {
        int min = i;
        for(int j=i;j<n;j++) {
            if(vec[j] < vec[min]) {
                min = j;
            }
        }
        swap(vec,i,min);
    }
}

int main() {
    vector<int> vtr= {2,4,1,5,7};
    
    selectionSort(vtr);
    
    for(auto it:vtr) {
        cout<<it<<" ";
    }
    return 0;
}