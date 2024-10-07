#include<iostream>

using namespace std;

void insertionRecursion(int arr[],int n,int i) {
    if(i == n) {
        return;
    }
    int j=i;
    while (j >0) {
        if(arr[j-1]>arr[j]) {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
        }
        j--;
    }
    insertionRecursion(arr,n,i+1);
}

int main()
{
    int arr[] = {3,2,1,5};
    insertionRecursion(arr,4,1);

    for(auto it: arr) {
        cout<<it;
    }
    return 0;
}