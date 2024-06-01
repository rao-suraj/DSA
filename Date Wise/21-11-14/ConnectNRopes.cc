#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={5,6,8,6,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
    }
    int Ans=0;
    int Sum=0;
    while(pq.size()>1)
    {
        int First=pq.top();
        pq.pop();
        int Second=pq.top();
        pq.pop();
        Sum=First+Second;
        Ans+=Sum;
        pq.push(Sum);
    }
    cout<<Ans;
    return 0;
}