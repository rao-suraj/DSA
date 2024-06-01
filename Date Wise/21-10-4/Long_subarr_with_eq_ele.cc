#include<iostream>

using namespace std;

int Longest_subarray(int arr[])
{
    unordered_map<string,int> map;
    map.insert(0'0,-1);
    int NoZero=0;
    int NoOne=0;
    int Notwo=0;
    int c1=0;
    int c2=0;
    int longest=0;
    for(int i=0;i<arr.length();i++)
    {
        if(arr[i]==0)
        {
            NoZero++;
        }
        else if(arr[i]==1)
        {
            NoOne++;
        }
        else
        {
            Notwo++;
        }

        c1=NoOne-NoZero;
        c2=NoTwo-NoOne;

        if(map.conunt(c1'c2))
        {
            int longest=max(longest,i-map(c1'c2));
        }
        else
        {
            map.insert(c1'c2,i);
        }
    }
}

int main()
{
    int arr[]={};
    cout<<Longest_subarray(arr);
    return 0;
}