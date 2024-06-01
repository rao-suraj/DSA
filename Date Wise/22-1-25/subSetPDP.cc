#include<iostream>

using namespace std;

bool subSetPre(int arr[],int W,int n)
{
    int t[n+1][W+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<W+1;j++)
        {
            if(j==0)
            {
                t[i][j]=true;
            }
            else if(i==0)
            {
                t[i][j]=false;
            }
        }
    }

    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<W+1;j++)
        {
            if(arr[i]<=j)
            {
                t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
            }
            else 
            {
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][W];
}

int main()
{
    int arr[]={2,3,7,8,10};
    int W=10;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<subSetPre(arr,W,n);
    return 0;
}