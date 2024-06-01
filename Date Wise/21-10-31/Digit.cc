#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    // string str;
    // cin>>str;
    // int sum=0;
    // for(int i=0;i<str.size();i++)
    // {
    //     if(isdigit(str[i]))
    //     {
    //         sum+=(int)str[i];
    //     }
    // }
    // cout<<sum;
    // char n='1';
    // int i=(int)n;
    // cout<<i;
    string str;
    cin>>str;
    int arr[]={1,10,100,1000,10000,100000};
    int SumNum=0;
    int index=0;
    	for(int i=str.size()-1;i>=0;i--)
    	{
    	    if(isdigit(str[i]))
    	    {
    	        SumNum+=(arr[index]*(str[i]-48));
                cout<<SumNum<<endl;
    	        index++;
    	    }
            else
            {
                index=0;
            }
    	}
    	cout<<SumNum;
    return 0;
}