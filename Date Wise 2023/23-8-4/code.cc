#include<iostream>

using namespace std;

int getNo(char dig[],int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }

    if(dig[0]==0)
    {
        return 0;
    }

    int count=0;
    if(dig[n-1]> '0')
    {
        count=getNo(dig,n-1);
    }
    if(dig[n-2]== '1' || dig[n-2]== '2' && dig[n-1]<'7')
    {
        count+=getNo(dig,n-2);
    }

    return count;
}

int main()
{
    char dig[10]={'1','3','1'};
    int n=3;
    cout<<getNo(dig,n);
    return 0;
}

// unordered_map<int,int> map;
