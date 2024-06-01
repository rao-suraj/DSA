#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string string1;
    string string2;
    cin>>string1;
    cin>>string2;
    set<char> s1;
    set<char> s2;
    for(int i=0;i<string1.size();i++)
    {
        s1.insert(string1[i]);
    }
        for(int i=0;i<string2.size();i++)
    {
        s2.insert(string2[i]);
    }
    int i=0;
    int j=0;
    string ans;
    while(i<s1.size() && j<s2.size())
    {
        if(s1[i]!=s2[j])
        {
            ans.push_back(s1[i])
        }
        i++;
        j++;
    }
        return ans;
    return 0;
}