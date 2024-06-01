#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[]={1,2,3,4,5,6,7,8};

    // Range Way
    // for(int it:arr)
    // {
    //     cout<<it;
    // }



    // I dont know the name
    vector<int> v={1,2,3,4,5,6};
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it;
    }
    return 0;
}

