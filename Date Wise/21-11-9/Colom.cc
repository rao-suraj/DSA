// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int A=27;
    // int Powr=1;
    // unordered_map<int,char> Value;
    // char n='A';
    // for(int i=1;i<=26;i++)
    // {
    //     Value[i]=(char)(n);
    //     n++;
    // }
    // string Ans;
    // while(A-pow(26,Powr)>0)
    // {
    //     Powr++;
    //     cout<<"While1";
    // }
    // Powr--;
    // while(Powr!=-1)
    // {
    // int count=0;
    // cout<<"While2";
    // while(A-pow(26,Powr)<pow(26,Powr))
    // {
    //     if(A-pow(26,Powr)>pow(26,Powr))
    //     {
    //         A=A-pow(26,Powr);
    //         count++;
    //     }
    //     else
    //     {
    //         Ans.push_back(A);
    //         break;
    //     }
    //     cout<<"WHile3";
    // }
    // Ans.push_back(Value[count]);
    // Powr--;
    // }
    // cout<<Ans;


//     int Powr=1;
//     unordered_map<int,char> Value;
//     char n='A';
//     for(int i=1;i<=26;i++)
//     {
//         Value[i]=(char)(n);
//         n++;
//     }
//     string Ans;
//     while(A-pow(26,Powr)>0)
//     {
//         Powr++;
//     }
//     Powr--;
//     int remainder=A;
//     int Quocent=0;
//     while(remainder<26)
//     {
//         Quocent=A/pow(26,Powr);
//         remainder=remainder % (int)pow(26,Powr);
//         Ans.push_back(to_string(Value[Quocent]));
//     }
//     Ans.push_back(to_string(Value[remainder]));
//     cout<< Ans;
//     return 0;
// }

#include<iostream>

using namespace std;

int main()
{
    int n=56;
    int ans=n%26;
    cout<<ans;
    ans=n/26;
    cout<<ans;
    return 0;
}