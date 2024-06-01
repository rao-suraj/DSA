#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    multiset<string> m;
    m.insert("edf");
    m.insert("bcd");
    m.insert("bcd");
    m.insert("tyu");
    auto it = m.find("bcd");
    if(it !=m.end())
    {
        m.erase(it);
    }
    for(auto v:m)
    {
        cout<<v<<endl;
    }
    return 0;
}