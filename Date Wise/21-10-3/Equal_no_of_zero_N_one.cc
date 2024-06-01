#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>

using namespace std;

int Co(int arr[])
{
    unordered_map<int,int> s;
    s.insert(pair<int,int>(0,1));
    int sum=0;
    int ans=0;

    for(int i=0;i<7;i++)
    {
        if(arr[i]==0)
        {
            sum-=1;
        }
        else if(arr[i]==1)
        {
            sum+=1;
        }
        if(s.count(sum))
        {
            ans += s.at(sum);
            cout<<s.at(sum)<<"...."<<endl;
            s.insert(make_pair(sum,s.at(sum)+1));
            cout<<s.at(sum)<<endl;
        }
        else
        {
            s.insert(pair<int,int>(sum,1));
        }
        cout<<sum<<"  "<<ans<<endl;
    }
    return ans;
}
int main()
{
    int arr[]={1,0,0,1,0,1,1};
    cout<<Co(arr);
    return 0;
}