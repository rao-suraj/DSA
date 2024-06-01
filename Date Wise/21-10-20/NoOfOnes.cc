#include<iostream>

using namespace std;

int NoOfOnes(int n)
{
    int count=0;
    while(n)
    {
        n = n & n-1;
        count++;
    }
    return count;
}

int main()
{
    cout<<NoOfOnes(19);
    return 0;
}