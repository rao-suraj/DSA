#include<iostream>

using namespace std;

int main()
{
    string s="geeksforgeek";
     int size,i,j;
        string ans=s;
        char temp;
        do{
            s=ans;
            ans.clear();
            i=0;j=1;
            while(j<s.size())
            {
                if(s[i]!=s[j])
                {
                    ans+=(s[i]);
                    i++;
                    j++;
                    if(j==s.size())
                        ans+=s[i];
                }else {
                    temp=s[i];
                    while((s[i]==s[j] || s[i]==temp) || j>=s.size())
                    {
                        i++;
                        j++;
                    }
                    if(j!=s.size())
                    {
                        ans+=(s[i]);
                        i++;
                        j++;
                    }else{
                        if(s[i]!=temp){
                            ans+=s[i];
                        }
                    }
                }
                cout<<ans<<" j="<<j<<endl;
            }    
            // cout<<ans<<endl;
            cout<<"OUt"<<endl;
        }while(s.size()!=ans.size());
        cout<<"DONE";
    return 0;
}