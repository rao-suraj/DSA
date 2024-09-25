#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void swp(vector<int>& arr,int i,int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(vector<int>& arr, int l,int r) {
    int pivot = l;
    while(l<r) {
        while(arr[l] <= arr[pivot] && l <= r) {
            l++;
        }

        while(arr[r] > arr[pivot]) {
            r--;
        }

        if(l < r) {
            swp(arr,l,r);
        }
    }
    swp(arr,pivot,r);
    return r;
}

void qsort(vector<int>& arr,int l,int h) {
    if(l >= h) {
        return ;
    }

    int pt = partition(arr,l,h);

    cout<<pt;

    qsort(arr,l,pt-1);
    qsort(arr,pt+1,h);
}

int main()
{
    vector<int> arr = {5,2,1,10,4};
    qsort(arr,0,4);

    cout<<endl;

    for(auto it:arr){
        cout<<it;
    }
    return 0;
}

