#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int NoOfThief(char arr[],int k,int n)
{
        vector<int> t;
        vector<int> p;
        int status[n];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            status[i]=-1;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='T')
            {
                t.push_back(i);
            }
            else
            {
                p.push_back(i);
            }
        }
        int i=0,j=0;
        bool loop=false;
        int min,max;
        while(i<t.size() && j<p.size())
        {
            int a=p[j]-k;
            int b=p[j]+k;
            if(0<a)
            {
                min=a;
            }
            else
            {
                min=0;
            }
            if((n-1)>b)
            {
                max=b;
            }
            else
            {
                max=n-1;
            }
            cout<<"max="<<max<<"min="<<min<<endl;
            while(t[i]<=max && i<t.size() && j<p.size())
            {
                if(t[i]>=min && t[i]<=max )
                {
                    status[t[i]]=1;
                    i++;
                    j++;
                    loop=true;
                    cout<<"T="<<t[i]<<i<<endl;
                    continue;
                }
                else
                {
                    i++;
                }
            }
            if(!loop)
            {
                j++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(status[i]==1)
            {
                ans++;
            }
        }
        return ans;
}

int main()
{
    char arr[]={'P','T','T','P','T'};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=1;
    cout<<NoOfThief(arr,k,n);
    return 0;
}