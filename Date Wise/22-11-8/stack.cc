#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> st;
    st.push('A');
    st.push('B');
    // cout<<st.top();
    cout<<st.size();
    // for(int i=0;i<st.size();i++)
    // {
    //     cout<<"sa";
    //     // cout<<st.top()<<endl;    --->>>> Not working 
    //     st.pop();
    // }
    // cout<<st.top();
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}