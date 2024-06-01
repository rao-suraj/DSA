/* Saddle Point
vector doesnot have find method.
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int getSaddlePoint(int arr[][3],int n) {
    unordered_set<int> minRow,maxCol;
    int lwst,hist;
    for(int i=0;i<n;i++) {
        lwst=INT_MAX;
        hist=INT_MIN;
        for(int j=0;j<n;j++) { 
            if(arr[i][j]<lwst) {
                lwst=arr[i][j];
            }
            if(arr[j][i]>hist) {
                hist=arr[j][i];
            }
        }
        minRow.insert(lwst);
        maxCol.insert(hist);
    }

    for(auto it:minRow) {
        if(maxCol.find(it)!= maxCol.end()) {
            return it;
        }
    }
    return 0;
}

int main() {
    int arr[][3] = {{1, 2, 10},
                    {2, 5, 6},
                    {3, 18, 4}};
    int n = 3;
    cout<<getSaddlePoint(arr,n);
    return 0;
}