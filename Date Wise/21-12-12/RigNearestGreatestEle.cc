#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={112, 133, 161, 311, 122, 512, 1212, 0, 19212};
    int n=9;
    // stack<int> s;
    // vector<int> ans;
    // for(int i=n-1;i>=0;i--)
    // {
    //     // cout<<"For";
    //     if(s.size()==0)
    //     {
    //         ans.push_back(-1);
    //     }
    //     else if(s.size()>0 && s.top()>arr[i])
    //     {
    //         ans.push_back(s.top());
    //     }
    //     else if(s.size()>0 && s.top()<=arr[i])
    //     {
    //         while(s.size()>0 && s.top()<=arr[i])
    //         {
    //             s.pop();
    //         }
    //         if(s.size()==0)
    //         {
    //             ans.push_back(-1);
    //         }
    //         else
    //         {
    //             ans.push_back(s.top());
    //         }
    //     }
    //     s.push(arr[i]);
    // }
    // reverse(ans.begin(),ans.end());
    // for(int i=0;i<ans.size();i++)
    // {
    //     cout<<ans[i]<<endl;
    // }
    stack<long long int> s;
    vector<long long int> ans;
    for(int i=n-1;i>=0;i--)
    {
        if(s.size()==0)
        {
            ans.push_back(0);
        }
        else if(s.size()>0 && s.top()>arr[i])
        {
            ans.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<=arr[i])
        {
            while(s.size()>0 && s.top()<=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    reverse(ans.begin(),ans.end());
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }
    
    return 0;
}