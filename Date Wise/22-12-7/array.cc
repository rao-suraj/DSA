#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={1,55,4,5,3,2,7,78};
    cout<<std::size(arr);
    // sort(arr.begin(),arr.end());
    for(auto i:arr)
    {
        cout<<i;
    }
    return 0;
}