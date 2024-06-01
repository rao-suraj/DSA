#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[]={5,10,15,5,4,5};
    unordered_set<int> s;
    for(int it :a)
    {
        s.insert(it);
    }
    cout<<s.size();
    return 0;
}
