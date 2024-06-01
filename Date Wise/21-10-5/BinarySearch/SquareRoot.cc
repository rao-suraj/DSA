#include<iostream>
#include<bits/stdc++.h>

using namespace std;

double eps = 1e-6;

double SquareRoot(double n)
{
    double lo=0,hi=n;
    while(hi-lo > eps)
    {
        // cout<<lo<<"   "<<hi<<endl;
        double mid=(hi+lo)/2;
        // cout<<mid<<endl;
        if((mid*mid)<n)
        {
            lo=mid;
        }
        else
        {
            hi=mid;
        }
    }
    return lo;
}

int main()
{
    double n;
    cin>>n;
    cout<<SquareRoot(n)<<endl;
    cout<<pow(n,1.0/2);
    return 0;
}