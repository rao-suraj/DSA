#include<iostream>

using namespace std;

double esp=1e-6;

int main()
{
    // int esp=1e-3;
    // double n;
    // cin>>n;
    // double l=1,h=n;
    // while(h-l>esp)
    // {
    //     double mid=(h+l)/2;
    //     cout<<mid<<" ";
    //     if(mid*mid==n)
    //     {
    //         cout<<mid;
    //         break;
    //     } else if(mid*mid<n)
    //     {
    //         l=mid;
    //     }
    //     else
    //     {
    //         h=mid;
    //     }
    // }

    // int l=1,h=20,mid;
    // int key=6;
    // while(h-l>=1)
    // {
    //     mid=(h+l)/2;
    //     if(mid<key)
    //     {
    //         l=mid+1;
    //     }
    //     else
    //     {
    //         h=mid;
    //     }
    // }
    // cout<<l<<" "<<h;

    double n;
    cin>>n;
    double l=1,h=n,mid;
    while(h-l>esp)
    {
        mid=(h+l)/2;
        if(mid*mid<n)
        {
            l=mid;
        }
        else
        {
            h=mid;
        }
    }
    cout<<h;
    return 0;
}

// T(O)=log(n*(10^d))
// for and root take n ..nlog(n(10^d))