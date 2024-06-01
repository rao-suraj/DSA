#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={6,2,5,4,5,1,6};
    int n=7;
    int units=1;
    stack<pair<int,int>> s;
    vector<int> ans;
    for(int i=n-1;i>=0;i--)
    {
        if(s.size()==0)
        {
            ans.push_back(n);
        }
        else if(s.size()>0 && s.top().first<arr[i])
        {
            ans.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=arr[i])
        {
            while(s.size()>0 && s.top().first>=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                ans.push_back(n);
            }
            else
            {
                ans.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
    }
    reverse(ans.begin(),ans.end());
    vector<int> ans2;
    stack<pair<int,int>> s2;
    for(int i=0;i<n;i++)
    {
        if(s2.size()==0)
        {
            ans2.push_back(-1);
        }
        else if(s2.size()>0 && s2.top().first<arr[i])
        {
            ans2.push_back(s2.top().second);
        }
        else if(s2.size()>0 && s2.top().first>=arr[i])
        {
            while(s2.size()>0 && s2.top().first>=arr[i])
            {
                s2.pop();
            }
            if(s2.size()==0)
            {
                ans2.push_back(-1);
            }
            else
            {
                ans2.push_back(s2.top().second);
            }
        }
        s2.push({arr[i],i});
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<ans2[i]<<endl;
    // }

    int MaxVal=INT_MIN;
    int CurrVal;
    int Whidth;
    for(int i=0;i<n;i++)
    {
        CurrVal=(((i-ans2[i])+(ans[i]-i))-1)*arr[i];  /*hg-lw-1*/
        MaxVal=max(MaxVal,CurrVal);
        // cout<<CurrVal;
    }
    cout<<MaxVal;
    return 0;
}