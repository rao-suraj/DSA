#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    /* >>>>>>>>> Pair <<<<<<<<<<<<*/

    // pair<int,int> pt[]={{2,2},{1,2},{2,4}};
    // cout<<pt.first<<"  "<<pt.second.first<<endl;
    // cout<<endl;
    
    //create pair {1,2};
    // cout<<pt[1].first<<pt[1].second<<endl;
    // pt[3]={3,4};

    // cout<<pt[3].first<<"  "<<pt[3].second<<endl;
    

    /*>>>>>>>>>>>>>>>>> Set  <<<<<<<<<<<<<<<<<*/   //O(1)
    set<int> st;
    st.insert(3);
    st.insert(4);   
    st.insert(1);

    auto it=st.find(3)<<endl;
    cout<<*it;
    cout<<st.count(5);
    st.erase(st.begin());
    return 0;
}