#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int B=95;
    vector<int> A={114, 55, 95, 131, 77, 111, 141};
    sort(A.begin(),A.end());
    // for(auto it=A.begin();it!=A.end();it++)
    // {
    //     cout<<*it<<endl;
    // }
    int lw=A[0];
    int hg=A[A.size()-1];
    int sum=0;
    while(lw<=hg)
    {
        int mid=(hg+lw)/2;
        cout<<mid<<endl;
        int idx=A.size()-1;
        while(A[idx]>mid & idx>=0)
        {
            sum+=A[idx]-mid;
            cout<<sum<<endl;
            idx--;
        }
        cout<<"While"<<endl;
        if(sum==B)
        {
            cout<<mid;
            break;
        }
        if(sum>B)
        {
            lw=mid+1;
            // cout<<"1if"<<endl;
        }
        else
        {
            hg=mid-1;
        }
        sum=0;
    }
    return 0;
}