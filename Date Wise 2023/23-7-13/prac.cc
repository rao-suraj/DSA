#include<iostream>

using namespace std;

int& mySwap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    return a;
}

int main()
{
    int x=10,y=20;
    mySwap(x,y)=200;
    cout<<&x<<endl;
    cout<<x<<y<<endl;
    return 0;
}