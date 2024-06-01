#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> A={4,8,-7};
    vector<int> B={4,-15,-10};
    int diff1=0;
    int diff2=0;
    int step=0;
    for(int i=1;i<A.size();i++)
    {
        diff1=fabs(A[i-1]-A[i]);
        cout<<diff1<<endl;
        diff2=fabs(B[i-1]-B[i]);
        cout<<endl<<diff2<<endl;
        if(diff1>=diff2)
        {
            step+=diff1;
        }
        else
        {
            step+=diff2;
        }
    }
    cout<<step<<endl;
    // int diff1=-7;
    // int diff2=8;
    // cout<<fabs(diff1-diff2);
    return 0;
}