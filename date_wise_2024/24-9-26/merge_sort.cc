
#include<bits/stdc++.h>

using namespace std;

void merge(int arr[],int i,int mid,int j) {
    int a[mid-i+1];
    int b[j-mid];
    int k=i;
    for(int h=0;h<mid-i+1;h++) {
        a[h]=arr[k];
        k++;
    }
    for(int h=0;h<j-mid;h++) {
        b[h]=arr[k];
        k++;
    }
    k=i;
    int h=0;
    int y=0;
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"SECOND"<<endl;
        for(auto it:b){
        cout<<it<<" ";
    }
    cout<<endl;
    
    while(h < mid-i+1 || y < j-mid) {
        if(a[h]<b[y]) {
            arr[k]=a[h];
            h++;
        } else {
            arr[k]=b[y];
            y++;
        }
        k++;
    }
    
    while(h<mid-i+1) {
        arr[k]=a[h];
        k++;h++;
    }
    
    while(y<j-mid) {
    arr[k]=b[y];
    k++;
    y++;
    }
}

void mergesort(int arr[],int i,int j) {
    if(i<j) {
        int mid = (i+j) / 2;
        
        cout<<"merge"<<i<<mid<<endl;
        mergesort(arr,i,mid);
        cout<<"merge"<<mid+1<<j<<endl;
        mergesort(arr,mid+1,j);
        
        cout<<i<<mid<<j;
        merge(arr,i,mid,j);
    }
    return;
}

int main() {
    int arr[] = {2,1,4,3,5};
    
    mergesort(arr,0,4);
    
    for(auto it: arr){
        cout<<it;
    }
    
    return 0;
}