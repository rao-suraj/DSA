#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st;
    stack<int> cloned;
    st.push(3);
    st.push(2);
    st.push(1);

    int count=0;
        while(count!=st.size()-1)
        {
            // cout<<"cout"<<endl;
            int TopVal=st.top();
            st.pop();
            // cout<<st.size()<<"     "<<count<<endl;
            while(st.size()!=count)
            {
                // cout<<"sdlkfj"<<endl;
                cloned.push(st.top());
                st.pop();
            }
            st.push(TopVal);
            count++;
            while(cloned.size()!=0)
            {
                st.push(cloned.top());
                cloned.pop();
                // cout<<"eutj"<<endl;
            }
            // cout<<endl;
            
        }
        // while(st.size()!=0)
        // {
        //     cout<<st.top();
        //     st.pop();
        // }
        while(st.size()!=0)
        {
            cloned.push(st.top());
            st.pop();
        }
        while(cloned.size()!=0)
        {
            cout<<cloned.top();
            cloned.pop();
        }
    return 0;
}