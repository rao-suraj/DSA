#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // cout<<v.size();
    // v.pop_back();
    // cout<<v.size();

    // string str="Hello Suraj.... How are you ?";
    // cout<<str.size();

    // vector<int> :: iterator it=v.begin();

    // for(it= v.begin(); it<v.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<*it;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    // vector<int> :: iterator it=v.begin();
    // v.push_back(4);
    // v.insert(it,2);
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i];
    // }

    // advance(it,2);
    // cout<<*it;

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.front();
    q.pop();
    cout<<q.front();
    return 0;
}