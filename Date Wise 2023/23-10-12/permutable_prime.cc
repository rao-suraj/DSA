#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void steveOfErotonus(bool primes[])
{
    primes[0]=false;
    for(int i=2; i*i <100;i++)
    {
        if(primes[i]==true)
        {
            for(int j=i * 2; j<100;j+=i)
            {
                primes[j]=false;
            }
        }
    }
}

int main()
{
    bool primes[10000];
    memset(primes,true,sizeof(primes));

    steveOfErotonus(primes);
    
    return 0;
}