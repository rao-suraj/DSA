#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    // int num1=6;
    // int num2=12;
    // int Ans=num1^num2;
    // cout<<Ans;
    vector<int> A={15, 5, 1, 10, 2};
    // cout<<A.size();
    sort(A.begin(),A.end());
    int i=0;
    int Ans;
    int MinAns;
    sort(A.begin(),A.end());
    while(i<A.size()-1)
    {
        Ans=A[i]^A[i+1];
        MinAns=min(MinAns,Ans);
        cout<<MinAns<<endl;
        i++;
    }
    return 0;
}