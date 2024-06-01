#include<iostream>

using namespace std;

int main()
{
    int a,b;
    int s=1,l=8;
    cin>>a>>b;
    int l1,l2,l3,l4;
    l1=min(b-s,a-s);
    l2=min(a-s,l-b);
    l3=min(l-a,b-s);
    l4=min(l-a,l-b);
    cout<<l1<<l2<<l3<<l4<<endl;
    cout<<l1+l2+l3+l4;
    return 0;
}