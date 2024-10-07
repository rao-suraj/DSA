#include<bits/stdc++.h>

using namespace std;

void swap(int arr[],int i,int j) {
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void shiftZerosToEnd(int arr[], int size) {
    int i=0;int j=size-1;
    while(i<j) {
        if(arr[i] == 0) {
            swap(arr,i,j);
            j--;
        } else {
            i++;
        }
    } 
}

int main() {
    int arr[] = {4,0,3,2,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    shiftZerosToEnd(arr,size);
    
    for(auto it:arr) {
        cout<<it<<" ";
    }
    return 1;
}