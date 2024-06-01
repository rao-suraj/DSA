#include<iostream>
#include<bits/stdc++.h>

using namespace std;

unordered_set<string> st;

void allSubSeq(string s,string a,int idx)
{
    if(idx>=s.size())
    {
        char ed=*(a.end()-1);
        // cout<<"ed=="<<ed<<endl;
        if((a[0]=='a' || a[0]=='e' || a[0]=='i' || a[0]=='o' || a[0]=='u') && (ed!='a' && ed!='e' && ed!='i' && ed!='o' && ed!='u'))
        st.insert(a);
        return;
    }
        allSubSeq(s,a+s[idx],idx+1);
        allSubSeq(s,a,idx+1);
}

int main()
{
    allSubSeq("aab","",0);

    // string s="abcd";
    // cout<<s[0]<<endl;
    // cout<<*(s.end()-1);
    unordered_set<string> ::iterator it;
    for(it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}