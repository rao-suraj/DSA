#include<iostream>

using namespace std;

int main()
{
    string st={"surrus"};
    int i=0,j=st.length()-1;
    int flag=0;
    while (i<=j)
    {
        if(st[i]==st[j])
        {
            i++;
            j--;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Pal";
    }
    else
    {
        cout<<"Not Pal";
    }
    return 0;
}