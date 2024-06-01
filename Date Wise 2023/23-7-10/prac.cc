#include<iostream>

using namespace std;

int main()
{
    cout<<sizeof(34.5)<<endl;
    cout<<sizeof(34.5f)<<endl;
    cout<<sizeof(34.5l)<<endl;
    cout<<sizeof((int)34.5)<<endl;
    cout<<sizeof('c');

    // int c=10;
    // int *pt=&c;

    // cout<<*pt<<endl;

    // *pt=30;
    // cout<<c;

    // *pt=0x61ff09;

    // cout<<*pt;

// Reference variable
    // int &r=c;
    
    // r=30;
    // cout<<r;
    return 0;
}