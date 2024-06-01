#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ele;
    string s;
    cin>>n;
    vector<string> vt;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        vt.push_back(s);
    }
    // for(auto vct:vt)
    // {
    //    for(auto x:vct)
    //    {
    //         cout<<x<<"  ";
    //    }
    // }
    int ans[1024]={0};
    char d[]={'0','1','2','3','4','5','6','7','8','9'};
    
    for(auto it:vt)
    {
        string st=it;
        string bit="";
        for(int i=0;i<10;i++)
        {
            if(st.find(d[i])!=std::string::npos)
            {
                bit+="1";
            }
            else
            {
                bit+="0";
            }
        }
        cout<<bit<<endl;
        int n=stoi(bit,0,2);
        cout<<n<<endl;
        cout<<endl;
        ans[n]++;
    }
    int count=0;
    for(int i=0;i<1024;i++)
    {
        for(int j=i+1;j<1024;j++)
        {
            if(i||j==1023)
            {
                count+=(ans[i]*ans[j]);
            }
        }
    }
    cout<<count;

    return 0;
}