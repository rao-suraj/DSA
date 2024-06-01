#include<iostream>

using namespace std;

int main()
{
    // char a='1';
    // if((int)a%2==(int)a-1)
    // {
    //     cout<<"true";
    // }
    // else
    // {
    //     cout<<"false";
    // }    
    string s="122190";
    int i=0;
    int count=0;
    while(s[i]!='\0')
    {
        if(s[i+1]=='\0')
        {
            count++;
            break;
        }
        else if(s[i]=='9' && s[i+1]=='0')
        {
            i+=2;
            count++;
        }
        else if(s[i]=='0' && s[i+1]=='9')
        {
            i+=2;
            count++;
        }
        else if((int)s[i]%2==0)
        {
            if((int)s[i+1]==(int)s[i]-1)
            {
                i+=2;
            }
            else
            {
                i++;
                count++;
            }
        }
        else
        {
            if((int)s[i+1]==(int)s[i]+1)
            {
                i+=2;
            }
            else
            {
                i++;
                count++;
            }
        }
    }
    cout<<count;
return 0;
}