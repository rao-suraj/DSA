// #include<iostream>

// using namespace std;

// int main()
// {
//      int B=35;
//     int MinStep=1;
//     int PresentPos=0;
//     while(PresentPos<B)
//     {
//         if(PresentPos==B)
//         {
//             cout<< MinStep;
//         }
//         PresentPos+=MinStep;
//         MinStep++;
//     }
//     MinStep--;
//     cout<<MinStep;
//     int Dum=MinStep*2;
//     int CheqStep;
//     while(MinStep!=Dum)
//     {
//         CheqStep=MinStep;
//         PresentPos=B;
//         while(PresentPos!=0 && CheqStep>0)
//         {
//             if(PresentPos==0 && CheqStep!=0)
//             {
//                 cout<<"Break";
//                 break;
//             }
//             if(PresentPos>0)
//             {
//                 PresentPos-=CheqStep;
//             }
//             else
//             {
//                 PresentPos+=CheqStep;
//             }
//             CheqStep--;
//         }
//         if(PresentPos==0 && CheqStep==0)
//         {
//             cout<<MinStep;
//         }
//         MinStep++;
//     }
//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
     int B=2;
    int MinStep=1;
    int PresentPos=0;
    while(PresentPos<B)
    {
        PresentPos+=MinStep;
        if(PresentPos==B)
        {
            cout<< MinStep;
        }
        MinStep++;
    }
    MinStep--;
    // cout<<MinStep;
    // cout<<PresentPos;
    if((B-PresentPos)%2==0)
    {
        cout<< MinStep;
    }
    else
    {
        MinStep++;
        PresentPos+=MinStep;
        if((B-MinStep)%2==0)
        {
            cout<<MinStep;
        }
        else
        {
            MinStep++;
            PresentPos+=MinStep;
            if((B-)%2==0)
            {
            cout<<MinStep;
            }
        }
    }
    return 0;
}