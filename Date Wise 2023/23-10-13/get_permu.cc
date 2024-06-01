#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> ans;
void swapInt(vector<int>& arr,int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void getPermu(vector<int>& arr,int idx) { 
    if(idx == arr.size()) {
        ans.push_back(arr);
        return;
    }

    for(int i=idx;i<arr.size();i++)
    {
        swapInt(arr,idx,i);
        getPermu(arr,idx+1);
        swapInt(arr,idx,i);
    }
}


int main() {
    // vector<int> arr = {1,2,3};
    // cout<<"NOthing";
    // getPermu(arr,0);
    // for(auto num: ans)
    // {
    //     for(auto itm: num)
    //     {
    //         cout<<itm;
    //     }
    //     cout<<endl;
    // }

    
    return 0;
}