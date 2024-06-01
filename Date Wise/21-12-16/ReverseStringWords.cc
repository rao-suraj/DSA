#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string ans;
    stack<char> stk;
    int i=0;
    int j=0;
    while(s[i]!='\0')
    {
        if(s[i]=='.')
        {
            while(stk.size()!=0)
            {
                ans.push_back(stk.top());
                j++;
                stk.pop();
            }
            ans.push_back('.');
            j++;
            i++;
        }
        else
        {
            stk.push(s[i]);
            i++;
        }
    }
    while(stk.size()!=0)
    {
        ans.push_back(stk.top());
        stk.pop();
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    return 0;
}