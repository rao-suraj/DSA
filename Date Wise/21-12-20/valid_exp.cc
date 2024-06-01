#include<iostream>

using namespace std;

int Val(char op)
{
    switch(op)
    {
    case '(' :return 1;
    case ')' :return -1;
    case '{' :return 2;
    case '}' :return -2;
    case '[' :return 3;
    case ']' :return -3;
    }
}

int main()
{
    string s="({)}{}(";
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum=sum+Val(s[i]);
    }
    if(sum==0)
    {
        cout<< true;
    }
    else
    {
        cout<< false;
    }
    return 0;
}