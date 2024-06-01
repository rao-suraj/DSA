#include<iostream>

using namespace std;

int main()
{
    int A=4;
    int size=2*A-1;
    int start=0;
    int end=size-1;
    vector<vector<int>> Mat;
    char Aa[size][size];
    while(A)
    {
        for(int i=start;i<=end;i++)
        {
            for(int j=start;j<=end;j++)
            {
                if(i==start || j==start || i==end || j==end)
                Aa[i][j]=A;
            }
            // Mat.push_back(temp);
            // temp.clear();
        }
        ++start;
        --end;
        --A;
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<Aa[i][j];
        }
        cout<<endl;
    }
    return 0;
}