#include<iostream>

using namespace std;

void Substring(string s,int i,string arr)
{
    if(i==s.length())
    {
        cout<<arr;
        return ;
    }
    Substring(s,i+1,arr+s[i]);
    Substring(s,i+1,arr);
}

int main()
{
    string s;
    cin>>s;
    Substring(s,0," ");
    return 0;
}