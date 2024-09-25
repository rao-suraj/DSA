#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> arr,int searchEle, int l ,int h){

    while(l<=h) {
        int mid = l + (h-l)/2;

        if(arr[mid] == searchEle) {
            return mid;
        } else if (arr[mid] < searchEle) {
            l = mid+1;
        } else {
            h = mid-1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr={1,2,6,9,10};

    cout<<binarySearch(arr,10,0,4);

    return 0;
}