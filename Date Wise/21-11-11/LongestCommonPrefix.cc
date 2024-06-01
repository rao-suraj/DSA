#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    // vector<string> A;
    // string Temp;
    // for(int i=0;i<=2;i++)
    // {
    //     cin>>Temp;
    //     A.push_back(Temp);
    //     Temp.clear();
    // }
    // cout<<A[0];
    // string New=A[0];
    // cout<<New;






    // vector<string> Aa;
    // for(int i=0;i<3;i++)
    // {
    //     string Temp;
    //     cin>>Temp;
    // }
    // string A;
    // A=Aa[0];
    // string B;
    // B=Aa[1];
    // string C;
    // C=Aa[2];
    // cout<<A;
    // cout<<B;
    // cout<<C;
    // int i=0;
    // int j=0;
    // int k=0;
    // string Ans;
    // while(i<A.size() && j<B.size() && k<C.size())
    // {
    //     if(A[i]==B[j]==C[k])
    //     {
    //         Ans.push_back(A[i]);
    //         i++;
    //         j++;
    //         k++;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // cout<<Ans;





     int Mi=INT_MAX;
    if(A.size()==0)
    return "";
    string C=A[0];
    for(int i=1;i<A.size();i++)
    {
        int j=0; int k=0;
        int a=0;
        while(j<C.size() && k<A[i].size())
        {
            if(C[j] == A[i][k])
            {
                a++;
            }
            else
            {
                break;
            }
            j++;
            k++;
        }
        Mi=min(Mi,a);
    }
    return C.substr(0,Mi);
    return 0;
}