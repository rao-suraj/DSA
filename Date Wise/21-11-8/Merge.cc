#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> A={-4,3};
    vector<int> B={-2,-2};
    vector<int> C;
    for(int i=0;i<A.size();i++)
    {
        C.push_back(A[i]);
    }
    int i=0;
    int j=0;
    A.clear();
    while(i<C.size() || j<B.size())
    {
        if(C[i]<B[j])
        {
            A.push_back(C[i]);
            i++;
        }
        else
        {
            A.push_back(B[j]);
            j++;
        }
    }

    while(i<C.size())
    {
        A.push_back(C[i]);
        i++;
    }
     while(j<B.size())
    {
        A.push_back(B[j]);
        j++;
    }
    for(auto it:A)
    {
        cout<<it;
    }
    return 0;
}