#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int A=4;
    int size=2*A-1;
    int start=0;
    int end=size-1;
    int Mat[size][size];
    while(A)
    {
        for(int i=start;i<=end;i++)
        {
            for(int j=start;j<=end;j++)
            {
                if(i==start || j==start || i==end || j==end)
                Mat[i][j]=A;
            }
        }
        ++start;
        --end;
        --A;
    }
    // cout<<"What";
    // int n;
    // n=Mat.size();
    // cout<<n;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<Mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}