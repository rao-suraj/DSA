#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string S;
    cin>>S;
    unordered_set<char> Set;
	for(int i=0;i<S.size();i++)
	{
	    Set.insert(S[i]);
	}
    for(auto it=Set.begin();it!=Set.end();it++)
    {
        cout<<*it;
    }
    return 0;
}