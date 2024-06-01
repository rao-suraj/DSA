#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[]="Suraj  Nagest Rao ";
    char* token;
    vector<string> tk;
    string ans;

    token=strtok(str," ");
    while(token)
    {
        tk.push_back(token);
        token=strtok(NULL," ");
    }
    ans.append(tk.back());
    tk.pop_back();
    while(tk.size()!=0)
    {
        ans.append(" ");
        ans.append(tk.back());
        tk.pop_back();
    }
    cout<<ans;
    return 0;
}