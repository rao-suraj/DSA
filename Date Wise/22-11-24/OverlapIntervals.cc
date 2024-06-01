#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> intv={{1,3},{6,8},{2,4},{9,10}};
    int l=intv.size();
    //     for(int i=0;i<intv.size()-1;i++)
    //     {
    //         for(int j=i+1;j<intv.size();j++)
    //         {
    //             if(intv[i][1]>intv[j][0])
    //             {
    //                 int st=min(intv[i][0],intv[j][0]);
    //                 int end=max(intv[i][1],intv[j][1]);
    //                 cout<<"st and end=="<<st<<" "<<end<<endl;
    //                 intv.erase(intv.begin()+j);
    //                 intv[i][0]=st;
    //                 intv[i][1]=end;
    //                 j--;
    //             }
    //         }
    //     }
    //     for(auto it :intv)
    //     {
    //         cout<<it[0]<<"  "<<it[1]<<endl;
    //     }

    
    return 0;
}







// {10,11} {5,7} {1,6} {7,10}

// {1,6} {5,7} {7,10} {10,11};