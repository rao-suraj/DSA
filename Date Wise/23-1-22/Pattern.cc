#include<iostream>

using namespace std;

int main()
{
    int count=1,n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<count;
            if(j!=i)
            {
                cout<<"*";
            }
            count++;
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        count-=i;
        int temp=count;
        for(int j=i;j>=1;j--)
        {
            cout<<temp;
            if(j!=1)
            {
                cout<<"*";
            }
            temp++;
        }
        cout<<endl;
    }

    return 0;
}