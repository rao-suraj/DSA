// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//     vector<int> A={1,2,4,4,5};
//     int start=0;
//     int B=5;
//     int end=A.size()-1;
//     int ans=-1;
//     int mid=0;
//     while(start<=end)
//     {
//         mid=(start+end)/2;
//         if(A[mid]==B)
//         {
//             ans=mid;
//             break;
//         }
//         if(A[mid]>B)
//         {
//             end=mid-1;
//         }
//         else
//         {
//             start=mid+1;
//         }
//     }
//     if(ans==-1)
//     {
//         if(A[mid]<B)
//         {
//             cout<<mid+1;
//         }else
//         {
//             cout<<mid;
//         }
//     }
//     else
//     {
//         while(A[mid]==A[mid+1])
//         {
//             cout<<"while2"<<endl;
//             mid++;
//         }
//         cout<<mid+1;
//     }
//     return 0;
// }


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> V={1,2,4,4,5};
    int B=4;
    // cout<<V[2];
    vector<int>:: iterator it;
    it =upper_bound(V.begin(),V.end(),B-V.begin());
    if(it == V.end())
    {
        cout<<"Not Found";
    }
    cout<<*it<<endl;
    return 0;
}