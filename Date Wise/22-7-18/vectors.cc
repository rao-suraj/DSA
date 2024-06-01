#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // // for(int i=0;i<v.size();i++)
    // // {
    // //     cout<<v[i]<<endl;
    // // }
    // pair<int,int> p;

    // vector<int> :: iterator t=v.begin();
    // for(t=v.begin();t!=v.end();t++)
    // {
    //     cout<<*t<<endl;
    // }

    vector<int> v;
    v={1,2,3,4,4,6};
    vector<int> :: iterator t;
    for(auto t=v.begin();t!=v.end();t++)
    {
        cout<<*t;
    }
    return 0;
}