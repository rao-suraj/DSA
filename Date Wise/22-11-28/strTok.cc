#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[]="Suraj Nagesh Rao";
    vector<string> vt;
    char *token=strtok(str," ");
    int i=0;
    while(token)
    {
        vt.push_back(token);
        token=strtok(NULL," ");
        i++;
    }
    for(auto it : vt)
    {
        cout<<it<<endl;
    }

    // char str[]="20/4/2022";

    // string dd=strtok(str,"/");
    // string mm=strtok(NULL,"/");
    // string yy=strtok(NULL,"/");

    // cout<<dd<<"  "<<mm<<"  "<<yy;
    
    // vector<int>v={1,2,3,4};
    // cout<<v[3];

    return 0;
}