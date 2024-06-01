#include<iostream>

using namespace std;

int main()
{
    string S="Hellow Suraj";
    S.insert(6," the");
    cout<<S<<endl;

    S.replace(6,5," ");
    cout<<S;
    return 0;
}