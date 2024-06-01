#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> A={1,3};
    vector<int> B={2,4};
    vector<int> C;
    for(int i=0;i<A.size();i++)
    {
        C.push_back(A[i]);
    }
    int i=0;
    int j=0;
    A.clear();
    while(i<C.size() && j<B.size())
    {
        if(C[i]<B[j])
        {
            cout<<C[i]<<endl;
            A.push_back(C[i]);
            i++;
        }
        else
        {
            cout<<B[j]<<endl;
            A.push_back(B[j]);
            j++;
        }
    }

    while(i<C.size())
    {
        cout<<"EX1";
        A.push_back(C[i]);
        i++;
    }
     while(j<B.size())
    {
        cout<<"EX2";
        A.push_back(B[j]);
        j++;
    }
    // for(auto Ele:A)
    // {
    //     cout<<Ele<<endl;
    // }
    return 0;
}