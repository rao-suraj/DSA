#include<iostream>

using namespace std;

void swap(int arr[], int i, int j) {
    int temp=arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int getPartition(int arr[], int start, int end) {
    int pivot=arr[start],i=start+1,j=end;
    while(i<=j) {
        if(arr[i] < pivot) {
            i++;
        } else {
            swap(arr,i,j);
            j--;
        }
    }
    swap(arr,start,j);
    return j;
}

void quickSort(int arr[], int start,int end) {
    if(start<end) {
        int partition= getPartition(arr,start,end);
        quickSort(arr,start,partition-1);
        quickSort(arr,partition+1,end);
    }
}

int main()
{
    int arr[]={2,3,4,1,5};
    quickSort(arr,0,4);
    for(auto it: arr) {
        cout<<it;
    }
    return 0;
}