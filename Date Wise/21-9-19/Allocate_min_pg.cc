#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Max_Ele(int arr[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int Sum_Ele(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

bool Is_Fisible(int arr[],int k,int res)
{
    int stud=1;
    int sum=0;

    for(int i=0;i<arr.size();i++)
    {
        if(sum+arr[i]>res)
        {
        stud++;
        sum=arr[i];
        }
        else
        {
            sum+=arr[i];
        }   
    }
    return stud<=k;
}

int Min_pg(int arr[],int n,int k)
{
    int min=Max_Ele(arr,n);
    int max=Sum_Ele(arr,n);
    while(min<=max)
    {
        int mid=(min+max)/2;
        if(Is_Fisible(arr,k,mid))
        {
            int res=mid;
            max=mid-1;
        }
        else
        {
            min=mid+1;
        }
    }
}

int main()
{
    
    return 0;
}