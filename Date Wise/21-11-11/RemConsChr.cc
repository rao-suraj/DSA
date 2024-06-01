#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string A="aabcd";
    int B=2;
    string Ans;
    int count=1;
    char PreEle=A[0];
    int i=1;
    cout<<A.size()<<endl;
    while(i<=A.size())
    {
        if(PreEle==A[i])
        {
            count++;
        if(count==B)
        {
            count=1;
            PreEle=A[i+1];
            i=i+2;
        }
        else
        {
        i++;
        }
        }
        else
        {
            for(int j=1;j<=count;j++)
            {
                Ans.push_back(PreEle);
            }
            count=1;
            PreEle=A[i];
            i++;
        }
        }
    cout<<Ans;
    return 0;
}