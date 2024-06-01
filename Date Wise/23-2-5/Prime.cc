#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool isPrime[n+1];
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2;i<n;i++)
    {
        isPrime[i]=true;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(isPrime[i]==true)
        {
            for(int p=i*i;p<=n;p+=i)
            {
                isPrime[p]=false;
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        if(isPrime[i]==true)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}