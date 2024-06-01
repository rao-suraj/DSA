#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> A;
    int N;
    int n;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        A.push_back(temp);
    }
    cout<<A.size();
    cout<<A[1].size();
    return 0;
}