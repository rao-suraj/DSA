#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int,int> q;
    q[1]=10;
    q.insert({2,11});
    map<int,int> ::iterator t;
    // for(auto t=q.begin();t!=q.end();t++)
    // {
    //     cout<<t->second<<" "<<endl;
    // }
    // q.erase(2);
    // for(auto t=q.begin();t!=q.end();t++)
    // {
    //     cout<<t->second<<" "<<endl;
    // }
    cout<<q.find(2);
    return 0;
}