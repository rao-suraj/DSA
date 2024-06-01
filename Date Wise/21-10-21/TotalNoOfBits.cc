#include<iostream>

using namespace std;

int main()
{
    long long int A=1000000000;
    long long int count=0;
    for(int i=1;i<=A;i++)
    {
        long long int n=i;
        while(n)
        {
            n=n & n-1;
            count++;
        }
    }
    cout<<count;
    return 0;
}