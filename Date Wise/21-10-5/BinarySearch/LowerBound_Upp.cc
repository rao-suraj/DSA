#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int lower_bound(vector<int> &v,int element)
{
    int low=0;
    int high=v.size()-1;
    while(high-low>1)
    {
        int mid=(high+low)/2;
        if(v[mid]<element)
        {
            low=mid+1;
        }
        else
        {
            high=mid;
        }
    }
    if(v[low]>=element)
    {
        return low;
    }
    if(v[high]>=element)
    {
        return high;
    }
    return -1;
}

int lowerBound2(vector<int> &v,int element)
{
    int ans=-1;
    int low=0;
    int high=v.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        // cout<<"mid="<<mid<<endl;
        if(v[mid]==element)
        {
            // cout<<"**";
            return mid;
        }
        else if(v[mid]>element)
        {
            ans=mid;
            high=mid-1;
        }
        else 
        {
            low=mid+1;
        }
    }
    return ans;
}

int upper_bound(vector<int> &v,int element)
{
    int low=0;
    int high=v.size()-1;
    while(high-low>1)
    {
        int mid=(high+low)/2;
        if(v[mid]<=element)
        {
            low=mid+1;
        }
        else if(v[mid]>element)
        {
            high=mid;
        }
    }
    if(v[low]>element)
    {
        return low;
    }
    if(v[high]>element)
    {
        return high;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i)
    {
        cin>>v[i];
    }
    int element;
    cin>>element;
    // int lb=lower_bound(v,element);
    int lb2=lowerBound2(v,element);
    // int up=upper_bound(v,element);
    // cout<<lb<<" "<<v[lb]<<endl;
    cout<<lb2<<" "<<v[lb2]<<endl;
    // cout<<up<<" "<<v[up]<<endl;
    return 0;
}