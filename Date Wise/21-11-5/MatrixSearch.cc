#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> A;
    int N;
    cin>>N;
    int n;
    for(int i=0;i<N;i++)
    {
        cin>>n;
        vector<int> Temp;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            Temp.push_back(x);
        }
        A.push_back(Temp);
    }
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            cout<<A[i][j];
        }
    }
    int B=10;
    int row=0;
    for(int i=0;i<N;i++)
    {
      if(A[i][0] == B)
      {
        cout<<true;
      }
      else if(A[i][0]>B)
      {
        break;
      }
      else
      {
        row=i;
      }
    }
      if(row>=0)
      {
        for(int j=0;j<n;j++)
        {
            if(A[row][j]==B)
            {
                cout<< true;
            }
        }
      }
      else{
            cout<< false;  
        }
    return 0;
}