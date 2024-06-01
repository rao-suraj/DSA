#include<iostream>

using namespace std;

int main()
{
    int arr[]={};
    int n=sizeof(arr)/sizeof(arr[0]);
    map<int,int> Map;
    int x=;
    for(int i=0;i<n;i++)
    {
        if(Map[arr[i]]==1)
        {
            continue;
        }
        else
        {
            Map[arr[i]]=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        y=x+arr[i];
        if(Map[y])
        {
            return true;
            break;
        }
    }
    return false;
    return 0;
}


  unordered_map<int,int> Map;
    for(int i=0;i<A.size();i++)
    {
        Map[A[i]] = 1;
    }
    int f=0;
    for(int i=0;i<A.size();i++)
    {
        if(Map[A[i]+B])
        {
            f=1;
            break;
        }
    }