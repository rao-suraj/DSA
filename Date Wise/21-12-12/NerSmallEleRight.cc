#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={4,5,2,10,8};
    int n=5;
    vector<int> Ans;
    stack<int> s;
    // for(int i=n-1;i>=0;i--)
    for(int i=0;i<n;i++)
    {
        if(s.size()==0)
        {
            Ans.push_back(-1);
        }
        else if(s.size()>0 && s.top()<arr[i])
        {
            Ans.push_back(s.top());
        }
        else if(s.size()>0 && s.top()>=arr[i])
        {
            while(s.size()>0 && s.top()>=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                Ans.push_back(-1);
            }
            else
            {
                Ans.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    // reverse(Ans.begin(),Ans.end());
    for(int i=0;i<Ans.size();i++)
    {
        cout<<Ans[i]<<" ";
    }
    return 0;
}