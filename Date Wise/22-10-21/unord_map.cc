#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<int,int> map;
    map.insert(make_pair(1,10));
    cout<<map.at(1);
    unordered_map<int,int>:: iterator itr; //making iterator
    itr=map.find(1);
    itr->second=20;
    cout<<map.at(1);
    return 0;
}

// Tow wayes to make a pair pair<type,type>(data,data);
// make_pair(data,data);