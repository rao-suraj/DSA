#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void getSubset(int arr[],int n,int sum,int curSum,int start,vector<int> &ans) {
    if(curSum==sum) {
        for(auto it: ans) {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    int previous=-1;
    for(int i=start;i<n;i++) {
        if(arr[i] != previous) {
            if(curSum + arr[i] > sum) {
                break;
            }
            ans.push_back(arr[i]);
            getSubset(arr,n,sum,curSum+arr[i],i+1,ans);
            ans.pop_back();
            previous=arr[i];
        }
    }
}

int main()
{
    int arr[]={1,2,7,6,2};
    int sum=8;
    sort(arr,arr+10);
    vector<int> ans;
    getSubset(arr,5,sum,0,0,ans);
    return 0;
}