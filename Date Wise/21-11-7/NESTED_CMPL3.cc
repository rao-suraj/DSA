#include<iostream>

using namespace std;

int main()
{
    int n=4;
    for(int i=n;i>=0;i=i/2)
    {
        for(int j=0;j<i;j++)
        {
            cout<<i<<endl<<"******"<<j<<endl;
        }
    }
    return 0;
}