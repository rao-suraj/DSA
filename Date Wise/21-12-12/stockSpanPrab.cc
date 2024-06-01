#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={100,80,60,70,60,76,85};
    int n=7;
    stack<pair<int,int>> s;
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        if(s.size()==0)
        {
            ans.push_back(-1);
        }
        else if(s.size()>0 && s.top().first>arr[i])
        {
            ans.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first<=arr[i])
        {
            while(s.size()>0 && s.top().first<=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                ans.push_back(-1);
            }
            else
            {
                ans.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<i-ans[i]<<endl;
    }
    return 0;
}