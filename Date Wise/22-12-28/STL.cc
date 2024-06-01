#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    /*<<<<<<<<<<<<  QUEUE  >>>>>>>>>>>>>*/

    // deque<int> q;
    // q.push_back(1);
    // q.push_front(2);
    // q.push_front(3);

    // cout<<q.at(1);

    // for(auto i:q)
    // {
    //     cout<<i<<endl;
    // }

    // cout<<q.back()<<endl;
    // cout<<q.front()<<endl;
    // cout<<q.empty();

    // q.erase(q.begin(),q.begin()+1);
    // for(auto i:q)
    // {
    //     cout<<i;
    // }

    // iterator implementation
    // deque<int>:: iterator it=q.begin();
    // cout<<*(it+1);





    /*<<<<<<<<<<<< LIST >>>>>>>>>>>>*/

    // list<int> l;
    // l.push_back(1);
    // l.push_back(2);

    // cout<<l.front();
    // cout<<l.back();
    // cout<<l.size();

    // cout<<l.at(1);

    /*<<<<<<<<<<<<<<< STACK >>>>>>>>>>>>>>>>*/
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    st.pop();

    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    cout<<st.size();
    return 0;
}