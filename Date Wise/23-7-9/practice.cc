#include<iostream>
#include<bits/stdc++.h>

using namespace std;

template<class T> void mySwap(T &a,T &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a=10,b=30;
    char c='a',d='b';
    mySwap(c,d);

    cout<<a<<"  "<<b<<endl;
    cout<<c<<"  "<<d<<endl;
    return 0;
}