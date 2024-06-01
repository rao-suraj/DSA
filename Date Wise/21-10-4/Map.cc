#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,string> n;
    n[1]="abc";
    n[2]="cde";
    n[3]="acd";
    // n.insert(make_pair(4,"afg"));
    // n.insert({5,"eee"});
    // for(int i=n.begin();i<=;i++)
    // {
    //     cout<<n[i]<<endl;
    // }
    auto it=n.find(2);
    if(it==n.end())
    {
        cout<<"Not There";
    }
    else
    {
        cout<<"Is There";
    }
    // n.clear()  To clear the whole map
    return 0; 
}