#include<iostream>

using namespace std;

int main()
{
    int arr[]={1,1,2,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int XorSum=0;
    for(int i=0;i<n;i++)
    {
        XorSum=XorSum^arr[i];
    }
    int Pos=XorSum;
    int count=0;
    int ans;
    while(Pos)
    {
        int lsb=Pos & 1;
        if(lsb)
        {
            ans=count;
            break;
        }
        Pos=Pos>>1; 
        count++;
    }
    int AnsXor=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] & 1<<ans)
        {
            AnsXor=AnsXor^arr[i];
        }
    }
    cout<<AnsXor;
    int two=AnsXor^XorSum;
    cout<<two;
    return 0;
}