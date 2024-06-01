#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long count(string str)
{
    long long ans=0;
        int c0=0;
        int c1=0;
        int c2=0;
        map<pair<int ,int>,int> m;
        map<pair<int ,int>,int> :: iterator it;
        m.insert({{0,0},1});
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='0')
            {
                c0++;
            }
            else if(str[i]=='1')
            {
                c1++;
            }
            else
            {
                c2++;
            }
            int diff1=c1-c0;
            int diff2=c2-c1;
            pair<int,int> key ={diff1,diff2};
            if(m.find(key)!=m.end())
            {
                it =m.find(key);
                ans+=(*it).second;
                m.insert({key,((*it).second)+1});
            }
            else
            {
                m.insert({key,1});
            }
        }
        return ans;
}

int main()
{
   string s="0102010";
   cout<<count(s);
}