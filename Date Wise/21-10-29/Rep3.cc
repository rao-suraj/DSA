#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int A[]={5,3};
    int n=sizeof(A)/sizeof(A[0]);
    vector<int> arr;
    int lsb;
    for(int i=0;i<n;i++)
    {
        int count=0;
        int Num=A[i];
        while(Num)
        {
            lsb=Num & 1;
            if(lsb==1)
            {
            cout<<count;
            arr[count]=arr[count]+1;
            }
            Num=Num>>1;
            count++;
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }
    return 0;
}
