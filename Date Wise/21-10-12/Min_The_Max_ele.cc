//  1 4 4 4 6
//  1  2 2  2 2  2 2  3 3

//  1      12
//  1   6     6
//  1  3 3   3 3 



// 2 4 8 2
// 2 4  4 4  2

// 1 1 5       8
// 1 1    5   4  4
//  1 2  3 2   4    4
//  1 2  3 2  2 2  2 2


// 1 1 5  8
// 1 1 5 5 4
// 1 1 2 3 2 3  4
// 1 1 2 3 2 3 2 2


//  7 17
//  7 9 8
//  7 8 5 4  
//  5 4 7 4 4
//  5 4 4 4 3 4

//  7 17 
//  7 7 10
//  7 7 5 5
//  3 4 3 4 5 5

//  4 5 6 
//  4 5 3 3
//  4 3 2 3 3
//  


// 4 5 6 
// 4 5 4 2 
// 4 4 1 4 2

// 7 17
// 7 8 9

// 7 20 
// 7 6 

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool possible(int arr[],int n,int mid,int k)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        count+=(arr[i]-1)/mid;
    }
    return count<=k;
}

int split(int arr[],int n,int k,int low,int high)
{
    int ans;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(possible(arr,n,mid,k))
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;
}

int main()
{
    int arr[]={2,4,8,2};
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<split(arr,n,k,0,max);
    return 0;
}
