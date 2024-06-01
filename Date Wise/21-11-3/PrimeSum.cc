#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int A=16;
    vector<int> arr;
    arr.push_back(2);
    for(int i=3;i<A;i++)
    {
        bool flag=true;
        for(int j=2;j<sqrt(i);j++)
        {
            if(i%j==0)
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
        arr.push_back(i);
        }
    }
    // int NoOfPair=0;
    int i=0;
    int j=1;
    while(i<arr.size() && j<arr.size())
    {
        if(arr[i]+arr[j]==A)
        {
            cout<<arr[i]<<arr[j];
            break;
        }
        else if(arr[i]+arr[j]>A)
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return 0;
}