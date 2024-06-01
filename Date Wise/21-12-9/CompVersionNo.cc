#include<iostream>

using namespace std;

int main()
{
    string A;
    int i=0;
    int j=0;
    int ValA;
    int ValB;
    while(A[i]!='\0' && B[j]!='\0')
    {
        ValA=A[i];
        ValB=B[j];
        if(A[i]=='.')
        {
            ValA=-1;
            if(B[j]=='.')
            {
                i++;
                j++;
                continue;
            }
            if(B[j]=='0')
            {
                j++;
                continue;
            }
            if(ValA==ValB)
            {
                i++;
                j++;
            }else if(ValA>ValB)
            {
               cout<<"1";
               break;
            }
            else
            {
                cout<<"-1";
               break;
            }
        }
        else if(B[j]=='.')
        {
            ValB=-1;
            if(A[i]=='0')
            {
                i++;
                continue;
            }
            if(ValA==ValB)
            {
                i++;
                j++;
            }else if(ValA>ValB)
            {
                cout<<"1";
                break;
            }
            else
            {
                cout<<"-1";
                break;
            }
        }
    }
    return 0;
    return 0;
}