// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

void swap(int arr[],int i,int j) {
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void shiftArray(int arr[],int size,bool isRight,int k) {
    int temp[k];
    if(isRight) {
        int itr=0;
        for(int i=size-k;i<size;i++) {
            temp[itr] = arr[i];
            itr++;
        }
        
        for(int i=0;i<size-k;i++) {
            swap(arr,i,i+k);
        } 
        
        for(int i=0;i<k;i++) {
            arr[i]=temp[i];
        }
    } else {
        for(int i=0;i<k;i++) {
            temp[i]=arr[i];
        }
        for(int i=k;i<size;i++) {
            swap(arr,i,i-k);
        }
        int itr= size-k;
        for(int i=0;i<k;i++) {
            arr[itr]=temp[i];
            itr++;
        }
    }
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    k=k%size;
    int isRight=1;
    if(size > 1 ) {
        shiftArray(arr,size,isRight,k);
    }
    for(auto it:arr) {
        cout<<it;
    }
    return 0;
}
/*

#include <iostream>

using namespace std;

void swap(int arr[],int i,int j) {
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void reverse(int arr[],int i,int j) {
    while(i<j) {
        swap(arr,i,j);
        i++;
        j--;
    }
}

void shift(int arr[],int size,int k,int isRightShift) {
    if(!isRightShift) {
        reverse(arr,0,k-1);
        reverse(arr,k,size-1);
        reverse(arr,0,size-1);
    } else {
        reverse(arr,size-k,size-1);
        reverse(arr,0,size-k-1);
        reverse(arr,0,size-1);
    }
}

int main() {
    int arr[]= {1,2,3,4,5};
    int k=2;
    bool isRightShift = false;
    int size = sizeof(arr)/sizeof(arr[0]);
    shift(arr, size, k, isRightShift);
    
    for(auto it:arr) {
        cout<<it<<" ";
    }

    return 0;
}
*/