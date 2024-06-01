#include<iostream>

using namespace std;

// int Pow(int N,int R)
// {
//     if(R==0)
//     {
//         return 1;
//     }
//     if(R==1)
//     {
//         return N;
//     }
//     return N*Pow(N,R-1);
// }

void Power2(int N,int R)
{
    int Ans=1;
    while(R)
    {
        cout<<"R="<<R<<endl;
        if(R%2==1)
        {
            Ans=Ans*N;
            cout<<"Ans="<<Ans<<endl;
        }
        R=R/2;
        N=N*N;
        cout<<"N="<<N<<endl;
    }
    cout<<"******"<<Ans;
}


int main()
{
    Power2(2,7);
    // cout<<0%2;
    return 0;
}