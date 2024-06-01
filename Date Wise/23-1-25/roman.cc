#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="XXXIII";
    int i=0,j=1;
    map<char,int> mp;
    mp.insert({'I',1});
    mp.insert({'V',5});
    mp.insert({'X',10});
    mp.insert({'L',50});
    mp.insert({'C',100});
    mp.insert({'D',500});
    mp.insert({'M',1000});
    int count=0;
    int n=s.size();
    while(j<=n)
    {
        if(mp[s[i]]>=mp[s[j]])
        {
            count+=mp[s[i]];
            i++;
            j++;
        }
        else{
            count=count+(mp[s[j]]-mp[s[i]]);
            i+=2;
            j+=2;
        }
    }
    if(i=n)
    {
        count+=mp[s[n]];
    }
    cout<<count;
    return 0;
}