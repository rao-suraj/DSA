#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x[]={"{{()}}"};
    vector<char> st;
    st.push_back('A');
    st.push_back('A');
    int n=x.size();
    int i=0;
    char temp;
    while(i<n)
    {
        if(x[i]=='[' || x[i]=='{' || x[i]=='(')
        {
            st.push_back(x[i]);
            i++;
        }
        else if(x[i]==']')
        {
            temp=st.back();
            if(temp=='[')
            {
                i++;
            }
            else
            {
                cout<<"F";
            }
        }
        else if(x[i]=='}')
        {
            temp=st.back();
            if(temp=='{')
            {
                i++;
            }
            else
            {
                cout<<"F";
            }
        }
        else
        {
            temp=st.back();
            if(temp==')')
            {
                i++;
            }
            else
            {
                cout<<"F";
            }
        }
    }
    return 0;
}


