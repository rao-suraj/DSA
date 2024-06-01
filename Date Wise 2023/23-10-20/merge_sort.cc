#include<iostream>

using namespace std;

void merge(int arr[],int n,int start,int mid,int end) {
    int n1=mid,n2=n-mid,arr1[n1],arr2[n2];
    int idx=0,idx1=0,idx2=0;
    for(int i=start;i<=start+mid-1;i++) {
        arr1[idx++]=arr[i];
    }
    idx=0;
    for(int i=start+mid;i<=end;i++) {
        arr2[idx++]=arr[i];
    }

    idx=start;
    while(idx1<n1 && idx2<n2) {
        if(arr1[idx1] < arr2[idx2]) {
            arr[idx] = arr1[idx1];
            idx++;
            idx1++;
        } else {
            arr[idx] = arr2[idx2];
            idx++;
            idx2++;
        }
    }

    while(idx1<n1) {
        arr[idx] = arr1[idx1];
        idx1++;
        idx++;
    }

    while(idx2<n2) {
        arr[idx] = arr2[idx2];
        idx2++;
        idx++;
    }
}

void mergeSort(int arr[],int n,int start,int end) {
    if(n == 1) {
        return ;
    }

    int mid=n/2;
    mergeSort(arr,mid,start,start+mid-1);
    mergeSort(arr,n-mid,start+mid,end);
    merge(arr,n,start,mid,end);
}

int main() {
    int arr[]= {4,2,1,3,5};
    mergeSort(arr,5,0,4);
    for(auto it: arr) {
        cout<< it;
    }
    return 0;
}