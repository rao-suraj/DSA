#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void decToRom(int n)
{
    int arr[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    unordered_map<int,string> map;

    map[1000]='M';
    map[900]="CM";
    map[500]='D';
    map[400]="CD";
    map[100]='C';
    map[90]="XC";
    map[50]='L';
    map[40]="XL";
    map[10]='X';
    map[9]="IX";
    map[5]='V';
    map[4]="IV";
    map[1]='I';


    int i=0;
    while(n)
    {
        if(n>=arr[i])
        {
            cout<<map[arr[i]];
            n-=arr[i];
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int n=209;
    decToRom(n);
    return 0;
}