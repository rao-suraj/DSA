#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(9);
    v1.push_back(8);
    v1.push_back(7);
    
    vector<int> ::iterator it=v1.begin();

    swap(v1[1],v1[2]);
    for(;it!=v1.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}