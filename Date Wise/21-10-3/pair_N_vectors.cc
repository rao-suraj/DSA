// #include<iostream>

// using namespace std;

// int main()
// {
    // pair<int,string> p;
    // p = make_pair(2,"lkcv");
    // pair<int ,string> &p1=p;
    // p1.first=3;
    // cout<<p1.first<<" "<<p1.second<<endl;
    // cout<<p.first<<" "<<p.second<<endl;
    // int a[]={1,2,3};
    // int b[]={2,3,4};

    // pair<int ,int > p[3];
    // p[0]={1,2};
    // p[1]={2,3};
    // p[2]={3,4};

    // for(int i=0;i<3;i++)
    // {
    //     cout<<p[i].first<<"  "<<p[i].second<<endl;
    // }


    // int a=10;
    // int &b=a;
    // cout<<a<<endl;
    // cout<<b<<endl;
    // b=9;
    // cout<<b<<endl;
    // cout<<a;

    // int a=10;
    // int *p=&a;
    // cout<<*p;
    // // &p=11;
    // cout<<*p;

//     return 0;
// }







#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }

    for(auto element:v)
    {
        cout<<element<<endl;
    }

    // v.pop_back();
    for(auto element:v)
    {
        cout<<element<<endl;
    }

    swap(v,v2);

    sort(v.begin(),v.end());
    


    pair<int,int> p;
    p = make_pair(1,2);
    cout<<p.first<<" "<<p.second<<endl;
    p=make_pair(1,1);
    cout<<p.first<<" "<<p.second<<endl;

    return 0;
}