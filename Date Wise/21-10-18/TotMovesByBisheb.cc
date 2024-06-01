// #include<iostream>

// using namespace std;

// int main()
// {
//     int A=2;
//     int B=4;
//     int Row=A;
//     int Col=B;
//     int ct=0;
//     while(Row>=1 & Col>=1)
//     {
//         Row--;
//         Col--;
//         ct++;
//     }
//     cout<<ct<<endl;
//     ct-=1;
//     Row=A;
//     Col=B;
//     while(Row>=1 & Col<=8)
//     {
//         Row--;
//         Col++;
//         ct+=1;
//     }
//     cout<<ct<<endl;
//     ct-=1;
//     Row=A;
//     Col=B;
//     while(Col>=1 & Row<=8)
//     {
//         Col--;
//         Row++;
//         ct+=1;
//     }
//     cout<<ct<<endl;
//     ct-=1;
//     Row=A;
//     Col=B;
//     while(Col<=8 & Row<=8)
//     {
//         Col++;
//         Row++;
//         ct+=1;
//     }
//     cout<<ct<<endl;
//     ct-=1;
//     cout<<ct;
//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    // vector<int> V={1,2,3,4,5};
    // cout<<V[0].size();

    int x,y;
    cin>>x;
    cin>>y;
    
    int a,b,c,d;
    a=min(x-1,y-1);
    b=min(8-x,y-1);
    c=min(8-x,8-y);
    d=min(x-1,8-y);
    cout<<a+b+c+d;
    return 0;
}