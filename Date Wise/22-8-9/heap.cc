#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,2,34,10};
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    cout<<endl;
    make_heap(v.begin() ,v.end());
    // cout<<v.front()<<"******"<<endl;
    // v.push_back(200);
    v.pop_back();
    vector<int>::iterator it;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    // cout<<v.front()<<endl;
    return 0;
}