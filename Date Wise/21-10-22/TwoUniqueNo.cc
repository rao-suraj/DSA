#include<iostream>

using namespace std;

int GetBit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}

int main()
{
    int arr[]={2,4,6,7,4,5,6,2};
    int m=sizeof(arr)/sizeof(arr[0]);
    int XorSum=0;
    for(int i=0;i<m;i++)
    {
        XorSum=XorSum^arr[i];
    }
    int count=0;
    int setbit=0;
    int TemXorSum=XorSum;
    while(setbit!=1)
    {
        setbit=XorSum & 1;
        count++;
        XorSum=XorSum>>1; 
    }
    int ans=0;
    for(int i=0;i<m;i++)
    {
        if(GetBit(arr[i],count-1))
        {
            ans=arr[i]^ans;
        }
    }
    cout<<ans<<endl;
    int Ans2=TemXorSum^ans;
    cout<<Ans2;
    return 0;
}