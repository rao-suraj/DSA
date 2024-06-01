#include<iostream>

using namespace std;

int main()
{
     int sum=0;
    for(int i=0;i<A.size();i++)
    {
        for(int j=i+1;j<A.size();j++)
        {
            int Diff=A[i]^A[j];
            int count=0;
            while(Diff)
            {
                if(Diff & 1)
                {
                count++;
                }
                Diff=Diff>>1;
            }
            sum+=count;
        }
    }
    return sum*2;
    return 0;
}