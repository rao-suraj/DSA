#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool oneToOne(string str1,string str2)
    {
        unordered_map<char,char> map;
        for(int i=0;i<str1.size();i++)
        {
            if(map.count(str1[i]))
            {
                if(map[str1[i]]!=str2[i])
                return false;
            }
            else
            {
                map[str1[i]]=str2[i];
            }
        }
        return true;
    }
    
    bool areIsomorphic(string str1, string str2)
    {
        return (oneToOne(str1,str2) && oneToOne(str2,str1));
    }

int main()
{
    string str1="aba";
    string str2="xyy";

    cout<<areIsomorphic(str1,str2);
    return 0;
}