#include<iostream>

using namespace std;

int getBit(int n,int pos)
{
    int r=1<<pos;
    cout<<r;
    return ((n & (1<<pos)) != 0);
}

int main()
{
    // int n=4;
    // int c=n>>1;
    // cout<<c;

    // int d=1<<n;
    // cout<<d;

    cout<<getBit(4,2);
    return 0;
}