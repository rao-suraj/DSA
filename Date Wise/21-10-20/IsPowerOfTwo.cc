#include<iostream>

using namespace std;

int IsPower(int n)
{
    return (n && !(n & n-1));
}

int main()
{
    cout<<IsPower(8);
    return 0;
}