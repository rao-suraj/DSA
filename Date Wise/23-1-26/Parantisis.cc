#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="{{{}}}";
    int n=s.size(),i=0;
    stack<char> st;
    string match="{([";
    while(i<n)
    {
        if(s[i]=='{' || s[i]=='[' || s[i]=='(')
        {
            st.push(s[i]);
            i++;
        }
        else
        {
            if((s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='[') || (s[i]==')' && st.top()=='('))
            {
                st.pop();
                i++;
            }
            else
            {
                cout<<"Invalid";
                exit(0);
            }
        }
    }
    if(st.size()==0)
    {
        cout<<"Valid";
    }
    else
    {
        cout<<"invalid";
    }
    while(st.size())
    {
        cout<<st.top();
        st.pop();
    }
    return 0;
}