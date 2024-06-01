#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<int,pair<string,string>> mp;
    mp[1]=make_pair("Suraj","Rao");
    mp[2]=make_pair("Nagesh","Rao");
    mp[3]=make_pair("Shalini","Rao");
    // // cout<<mp[1].first<<" "<<mp[1].second;

    // map<int,pair<string,string>> :: iterator it ;

    // // for(it=mp.begin();it!=mp.end();it++)
    // // {
    // //     cout<<it->first;
    // // }

    // mp.insert({4,{"Suraj", "Shetty"}});
    // it=mp.find(1);
    // cout<<it->second.first;

    set<int,greater<int>> st;
    st.insert(5);
    st.insert(2);
    st.insert(10);
    st.insert(4);
    st.insert(5);

    for(auto it: st)
    {
        cout<<it<<" ";
    }

   for(auto it : mp)
   {
    cout<<it.first<<it.second.first;
   }

    set<int,greater<int>> st2;
    return 0;
}