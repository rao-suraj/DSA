#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int Amt;
    cin>>Amt;
    float Bal;
    cin>>Bal;
    if(Amt%5!=0)
    {
        cout<<Bal;
    }
    else if(Amt>Bal)
    {
        cout<<Bal;
    }
    else
    {
        float RemBal=Bal-Amt-0.50;
        if(RemBal>Bal)
        {
            cout<<Bal;
        }
        else
        {
            cout<<RemBal;
        }
    }
    return 0;
}