#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s="wrquqweh";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' & s[i]<='z')
        {
            s[i]-=32;
        }
    }
    cout<<s;

    // For lower Case Add 32
    return 0;
}