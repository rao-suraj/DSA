#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=20;
    vector<int> a;
    for(int i=0;i<n;i++)
    { 
        if(n%(i+1))
        {
            a.push_back(i);
        }
    }
    for(auto at=a.begin();at!=a.end();at++)
    {
        cout<<*at<<endl;
    }
    cout<<endl;
    vector<int> v;
    for(int i=1;i<sqrt(n);i++)
    {
        if(!(n%i))
        {
            v.push_back(i);
        }
    }
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}