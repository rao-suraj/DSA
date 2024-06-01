#include<iostream>

using namespace std;

int main()
{
    int a=10;
    int b=10;
    if(a-b)
    {
    }
    else
    {
        cout<<"Both are same\n";
        exit(0);
    }
    if(a/b)
    {
        cout<<"A is the greatest\n";
    }
    else
    {
        cout<<"B is the greatest\n";
    }
    return 0;
}