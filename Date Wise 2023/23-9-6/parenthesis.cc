#include<iostream>
#include<stack>

using namespace std;

int main()
{
    string str="({<>})";
    stack<char> st;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='{' || str[i]=='(' || str[i]=='<' || str[i]=='[')
        {
            st.push(str[i]);
        } else if( (str[i]=='>' && st.top()=='<') || (str[i]=='}' && st.top()=='{') || (str[i]==')' && st.top()=='(') || (str[i]==']' && st.top()=='[') ) {
            st.pop();
        } else {
            cout<<"INVALID Paranthesis";
        }
    }
    cout<<"Valid String";
    return 0;
}