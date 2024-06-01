#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st="00110";
    int count=0;
    for(int i=0;i<st.size();i++)
    {
        count+=(st[i]-'0')*pow(2,(st.size()-1)-i);
    }
    cout<<count;
    return 0;
}