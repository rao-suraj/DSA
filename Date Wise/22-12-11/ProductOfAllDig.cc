#include<iostream>

using namespace std;

int main()
{
    int n,rem=0,ans=1;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        ans=ans*rem;
    }
    cout<<ans;
    return 0;
}