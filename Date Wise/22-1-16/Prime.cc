#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=19;
    bool arr[n];
    for(int i=2;i<n;i++)
    {
        arr[i]=true;
    }

    // for(int i=2;i<n/2;i++)
    // {
    //     if(arr[i]==true)
    //     {
    //         int j=2;
    //         while(j*i<=n)
    //         {
    //             arr[j*i]=false;
    //             j++;
    //         }
    //     }
    // }

    // for(int i=0;i<n/2;i++)
    // {
    //     if(arr[i]==true)
    //     {
    //         for(int j=2*i;j<=n;j=j+i)
    //         {
    //             arr[j]=false;
    //         }
    //     }
    // }

// OPTIMIZATION
    for(int i=0;i<sqrt(n);i++)
    {
        if(arr[i]==true)
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                arr[j]=false;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<i<<"="<<arr[i]<<endl;
    }
    return 0;
}