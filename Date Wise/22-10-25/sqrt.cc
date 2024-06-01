#include<iostream>

using namespace std;

double eps=1e-6;

int main()
{
    double n=4;
    double low=0,high=n;
    while(high-low>eps)
    {
        cout<<"sdkfjsdkf";
        double mid=(low+high)/2;
        if((mid*mid)>n)
        {
            high=mid;
        }
        else
        {
            low=mid;
        }
    }
    cout<<low<<"   "<<high<<endl; 
    return 0;
}