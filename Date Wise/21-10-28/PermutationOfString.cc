#include<iostream>

using namespace std;

void swap(string s,int i,int l)
{
    int temp=s[i];
    s[i]=s[l];
    s[l]=temp;
}

void Permuntation(string s,int l,int r)
{
    if(l==r)
    {
        cout<<s;
        return ;
    }
    for(int i=l;i<=r;i++)
    {
        swap(s,i,l);
        Permuntation(s,l+1,r);
        swap(s,i,l);
    }
}

int main()
{
    string s;
    cin>>s;
    int l=0;
    int r=s.length()-1;
    Permuntation(s,l,r);
    return 0;
}