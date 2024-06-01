// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;

// int GetBit(int arr[],int ele,int pos)
// {
//     int ans=arr[ele] & 1<<pos;
//     cout<<ans<<"eeee"<<endl;
//     return ans;
// }

// int Max(int arr[],int n)
// {
//     int Max=INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>Max)
//         {
//             Max=arr[i];  
//         }
//     }
//     return Max;
// }
// int main()
// {
//     int arr[]={2};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int m=0;
//     while(pow(2,m)<=Max(arr,n)) m++;
//     cout<<"M="<<m;
//     int count[m+1];
//     for(int i=0;i<n;i++)
//     {
//         int q=0;
//         while(pow(2,q)<=i) q++;
//         int pos=0;
//         while(pos<q+1)
//         {
//             if(GetBit(arr,i,pos))
//             {
//                 count[pos]+=1;
//             }
//             pos++;
//         }
//     }
//     for(int i=0;i<m;i++)
//     {
//         cout<<count[i]<<endl;
//     }
//     return 0;
// }



#include<iostream>

using namespace std;

bool GetBit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}

int SetBit(int n,int pos)
{
    return (n | (1<<pos));
}

void Unique(int arr[],int n)
{
    int result=0;
    for(int i=0;i<64;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(GetBit(arr[j],i))
            {
                sum++;
            }
        }
            if(sum%3!=0)
            {
                result = SetBit(result,i);
            }
    }
    cout<<result;
}

int main()
{
    int arr[]={1,2,3,4,1,2,3,1,2,3};
    Unique(arr,10);

    // cout<<GetBit(3,3);
    return 0;
}