#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool Palindrome(string str,int i,int j)
{
    if(i>=j)
    {
        return true;
    }
    if(str[i]==str[j])
    {
        return Palindrome(str,i+1,j-1);
    }
    else
    {
        return false;
    }
}

int main()
{
    string str;
    cin>>str;
    if(Palindrome(str,0,str.length()))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}

