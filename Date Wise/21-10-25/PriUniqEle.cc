#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int L=10;
    int R=20;
    vector<int> Ans;
    for(int i=L;i<=R;i++)
        {
            int n=i;
            int Rem;
            set<int> Cheq;
            int count=0;
            while(n)
            {
                Rem=n%10;
                Cheq.insert(Rem);
                n=n/10;
                count++;
            }
            if(Cheq.size()==count)
            {
                Ans.push_back(i);
            }
        }
        for(int v:Ans)
        {
            cout<<v;
        }
    return 0;
}