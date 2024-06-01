#include<iostream>

using namespace std;

int main()
{
    bool arr[100][2]={false};
    // for(auto i:arr){
    //     for(auto j: arr[0])
    //     {
    //         cout<<ar
    //     }
    // }

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<arr[i][j];
        }
    }
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr[0]);
    return 0;
}