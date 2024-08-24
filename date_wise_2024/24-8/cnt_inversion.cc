#include <iostream>
#include <set>

using namespace std;

int count;

void merge(int arr[], int st, int ed, int md) {
    int a[md - st + 1];
    int b[ed - md];
    int itr = st;
    int stA=0;
    int stB=0;
    int val =0;
    for(int i = st; i<=md; i++) {
        a[val++] = arr[i];
    }
    val = 0;
    for(int j = md+1; j<=ed; j++) {
        b[val++] = arr[j];
    }
    // for(auto it: a) {
    //     cout<<it;
    // }
    // cout<<endl;
    //    for(auto it: b) {
    //     cout<<it;
    // }
    // cout<<endl;
    while(stA < md-st+1 && stB < ed-md) {
        if(a[stA] > b[stB]) {
            count++;
            arr[itr] = b[stB];
            itr++;
            stB++;
        } else {
            arr[itr] = a[stA];
            itr++;
            stA++;
        }
    }
    while(stA < md -st  +1) {
        arr[itr] = a[stA];
        stA++;
        itr++;
    }
    while(stB < ed - md) {
        arr[itr] = b[stB];
        stB++;
        itr++;
    }
}

void mergeSort(int arr[], int st,int ed) {
    if(st == ed) {
        return;
    }
    int md = (ed+st)/2 ;
    mergeSort(arr,st,md);
    // for(int i = st;i <= md ; i++) {
    //     cout<<arr[i];
    // }
    // cout<<endl;
    mergeSort(arr,md+1,ed);
    //   for(int i = md+1;i <= ed ; i++) {
    //     cout<<arr[i];
    // }
    // cout<<endl;
    // cout<<"VAL"<<st<<" "<<ed<<" "<<md<<" "<<endl;
    merge(arr,st,ed,md);
    //   for(int i = st;i <= ed ; i++) {
    //     cout<<arr[i];
    // }
}

int main() {
    /* Brute force O(n^2)*/
    // int arr[] = {10, 10, 10};
    // int size= sizeof(arr)/sizeof(arr[0]);
    // int invCnt = 0;
    // for(int i= 0 ;i< size;i++) {
    //     for(int j = i+1;j< size;j++) {
    //         if(arr[i] > arr[j]) {
    //             invCnt ++;
    //         }
    //     }
    // }


    // merge sort method.

    int arr[] = {2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,size-1);
    // merge(arr,0,1,0);

    // for(auto it: arr) {
    //     cout<<it<<" ";
    // }

    cout<<count;

    return 0;
}