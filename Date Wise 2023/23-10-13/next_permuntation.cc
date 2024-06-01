#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vec={1,2,3};
    do{
        int num;
        int size=vec.size();
        num=vec[0];
        for(auto itm: vec)
        {
            cout<<itm<<" ";
        }
        for(int i=1;i<size;i++)
        {
            num=num*10+vec[i];
        }
        cout<<num;
        cout<<endl;
    } while(next_permutation(vec.begin(),vec.end()));
    return 0;
}