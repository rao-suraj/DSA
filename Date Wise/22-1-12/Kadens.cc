#include<iostream>

using namespace std;

int MaxSubbArray(int arr[],int n)
{
    if(n==1)
    {
        return arr[n];
    }
    int m=n/2;
    int RigM=MaxSubbArray(arr+m,n-m);
    int LefM=MaxSubbArray(arr,m);
    int Left=0,Rigt=0;
    int sum=0;
    for(int i=m;i<n;i++)
    {
        sum+=arr[i];
        Left=max(sum,Left);
    }
    sum=0;
    for(int j=m-1;j>=0;j--)
    {
        sum+=arr[j];
        Rigt=max(Rigt,sum);
    }
    int MAX=max(RigM,LefM);
    return max(MAX,Left+Rigt);
}

int main()
{
    
    // TO FIND ALL THE SUBARRAY.

    int arr[10]={5,3,6,-1,7,1};
    cout<<MaxSubbArray(arr,5);
    // for(int i=1;i<=5;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         if(i+j>5)
    //         {
    //             break;
    //         }
    //         for(int k=j;k<i+j;k++)
    //         {
    //             cout<<arr[k]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }


    // int arr[10]={5,3,6,2,7,1};
    // for(int i=0;i<5;i++)
    // {
    //     for(int j=1;j<=5;j++)
    //     {
    //         if(i+j>5)
    //         {
    //             break;
    //         }
    //         for(int k=i;k<i+j;k++)
    //         {
    //             cout<<arr[k]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }

    // int arr[10]={5,3,6,2,7,1};
    // int max=INT_MIN;
    // for(int i=0;i<5;i++)
    // {
    //     int sum=0;
    //     for(int j=1;j<=5;j++)
    //     {
    //         if(i+j>5)
    //         {
    //             break;
    //         }
    //         sum+=arr[i+j-1];
    //          ans=max(sum,ans);
    //     }
    // }   O(n^2)

    return 0;
}