#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    // int arr[]={1,2,2,13,1,1,3};
    // int k=5;
    // int n=sizeof(arr)/sizeof(arr[0]);
    // map<int,int> Map;
    // for(int i=0;i<k;i++)
    // {
    //     auto it = Map.find(arr[i]);
    //     if(it == Map.end())
    //     {
    //         Map.insert({arr[i],1});
    //     }
    //     else
    //     {
    //         Map.insert({arr[i],(Map[i])+1});
    //     }
    // }
    // cout<<Map.size()<<endl;
    // for(int i=k;i<n;i++)
    // {
    //     if(Map[i-k]==1)
    //     {
    //         Map.clear();
    //     }
    //     else
    //     {
    //         Map.insert({arr[i-k],(Map[i-k])-1});
    //     }
    //     auto it = Map.find(arr[i]);
    //     if(it == Map.end())
    //     {
    //         Map.insert({arr[i],1});
    //     }
    //     else
    //     {
    //         Map.insert({arr[i],(Map[i])+1});
    //     }
    //     cout<<Map.size()<<endl;
    // }

    map<int,int> m;
    m[1]=10;
    m[2]=11;
    m[3]=12;
    m[4]=15;
    cout<<m[2];
    return 0;
}