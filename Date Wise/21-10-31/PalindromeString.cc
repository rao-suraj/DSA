#include<iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(!(isalpha(str[i])))
        {
            cout<<"True";
        }
        else
        {
            cout<<"False";
        }
    }
    return 0;
}