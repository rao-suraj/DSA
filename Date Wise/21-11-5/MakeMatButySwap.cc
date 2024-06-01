#include<iostream>

using namespace std;

Swap(vector<pair<int,int>> Eles)
{
    int n=Else.size();
    int temp=A[Eles[n-2].ferst()][Eles[n-2].second()];
    A[Eles[n-2].ferst()][Eles[n-2].second()]=A[(Eles[n-2].ferst())-1][Eles[n-2].second()];
    A[(Eles[n-2].ferst())-1][Eles[n-2].second()]=temp;
}

int main()
{
    for(int i=1;i<M;i++)
    {
        vector<pair<int,int>> EleToSwap;
        NoOfMissPalcedEle=2;
        int count=0;
        int j=0;
        while(j<N)
        {
            if(A[i][j]==i-1)
            {
                count++;
                EleToSwap.insert({i,j});
                if(count==NoOfMissPlacedEle)
                {
                    NoOfMissPlacedEle=NoFoMissPlacedEle*2;
                    Swap(EleToSwap);
                }
            }
            j++;
            if(count%2!=0)
            {
                return -1;
            }
        }
    }
    return 0;
}