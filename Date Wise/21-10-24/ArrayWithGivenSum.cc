#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={10,15,-5,15,-10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int GivenSum=5;
    int RemSum;
    int CurrSum=0;
    map<int,int> SumMap;
    for(int i=0;i<n;i++)
    {
        CurrSum+=arr[i];
        if(CurrSum-GivenSum==0)
        {
            cout<<"str=0";
            cout<<"end="<<i;
            break;
        }
        SumMap.insert({CurrSum,i});
        RemSum=CurrSum-GivenSum;
        auto it=SumMap.find(RemSum);
        if(it == SumMap.end())
        {
            continue;
        }
        else
        {
            // pair<int,int> p;
            // p=make_pair<(*it)>;
            cout<<(*it).second<<endl;
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}