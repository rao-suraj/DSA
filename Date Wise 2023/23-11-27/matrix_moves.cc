/* 
    MATRIX MOVES

*/
#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int visited[4][4]={0};

int getMinMoves(int arr[][4], int n,int i,int j) {
    if( i>=n || j>=n || i<0 || j<0 || arr[i][j] == 0 || visited[i][j]==1) {
        return INT_MAX;
    } else if(arr[i][j]==2) {
        // visited[i][j]=1;
        return 0;
    }
    visited[i][j]=1;
    // cout<<i<<" "<<j<<endl;
    int mx1=min(getMinMoves(arr,n,i+1,j),getMinMoves(arr,n,i-1,j));
    // cout<<"max1="<<mx1<<endl;
    int mx2=min(getMinMoves(arr,n,i,j+1),getMinMoves(arr,n,i,j-1));
    // cout<<"max2="<<mx2<<endl;
    // cout<<endl;
    int mx=min(mx1,mx2);
    if(mx == INT_MAX) {
        return INT_MAX;
    } else {
        return mx+1;
    }
}

int main()
{
    int arr[4][4] = {{ 3 , 3 , 0 , 0 },
                   { 3 , 0 , 3 , 1 },
                   { 2 , 3 , 0 , 3 },
                   { 0 , 3 , 3 , 3 }};
    // for(int i=0;i<3;i++) {
    //     for(int j=0;j<3;j++) {
    //         if(arr[i][j]==1) {
    //             cout<<getMinMoves(arr,3,i,j);
    //             break;
    //         }
    //     }
    // }
    // cout<<arr[0][2];
    cout<<getMinMoves(arr,4,1,3);
    return 0;
}