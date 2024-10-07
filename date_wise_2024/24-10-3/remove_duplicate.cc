#include <bits/stdc++.h>

using namespace std;

void swap(int arr[],int i,int j) {
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int removeDuplicate(int arr[],int size) {
    int i=0,j=1;
    while(j<size){
        if(arr[i] != arr[j]) {
            i++;
            swap(arr,i,j);
            j++;
        } else {
            j++;
        }
    }
    return i+1;
}

int main() {
    int arr[]= {3,3,3,3,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = removeDuplicate(arr,size);
    for(int i=0;i<k;i++) {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}