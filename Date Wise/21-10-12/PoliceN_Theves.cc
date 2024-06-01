// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//     char Type[] = {'T','P','T'};
//     int n=3;
//     char Count[3];
//     int k=1;
//     for(int i=0;i<n-1;i++)
//     {
//         Count[i]='F';
//     }
//     int ans=0;
//     int i=0;
//     while(i<n-1)
//     {
//         if(Type[i]=='T')
//         {
//             i++;
//         }
//         else
//         {
//             Count[i]='T';
//             int j=i;
//             int PreAns=ans;
//             while(j-k<=i)
//             {
//                 if(j-k<=0)
//                 {
//                     continue;
//                 }
//                 else
//                 {
//                     if(Type[j-k]=='T' & Count[j-k]=='F')
//                     {
//                         ans++;
//                         Count[j-k]='T';
//                         break;
//                     }
//                 }
//                 j++;
//             }
//             if(PreAns!=ans)
//             {
//                 i++;
//                 continue;
//             }
//             else
//             {
//                 int j=i;
//                 while(j<=i+k)
//                 {
//                     if(j>=n-1)
//                     {
//                         break;
//                     }
//                     else
//                     {
//                         if(Type[j]=='T' & Count[j]=='F')
//                         {
//                             ans++;
//                             Count[j]='T';
//                             i++;
//                             break;
//                         }
//                     }
//                     j++;
//                 }
//             }
//         }
//     }
//     cout<<ans;
//     return 0;
// }



#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k=1;
    int n=5;
    char arr[]={'P', 'P', 'P', 'P', 'T'};
    vector<int> Thief;
    vector<int> Police;
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='T')
        {
            Thief.push_back(i);
        }
        else
        {
            Police.push_back(i);
        }
    }
    int i=0;
    int j=0;
    int diff;
    int ans=0;
    int count=0;
    while(i<=Police.size() & j<=Thief.size())
    {
        diff=fabs(Police[i]-Thief[j]);
        if(diff<=k)
        {
            j++;
            count=j;
            i++;
            ans++;
        }
        else
        {
            j++;
            if(j>Thief.size())
            {
                j=count;
                i++;
            }
        }
    }
    cout<<ans;

    return 0;
}




