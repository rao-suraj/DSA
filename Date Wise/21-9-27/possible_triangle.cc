#include<iostream>
#include<algorithm>


using namespace std;

int main()
{
    int arr[]={6, 4, 9, 7, 8};
    int n=sizeof(arr)/sizeof(arr[0]);
    // int coutn=0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         for(int k=j+1;k<n;k++)
    //         {
    //             coutn++;
    //         }
    //     }
    // }
    // cout<<coutn;

   sort(arr, arr+n);
        
        int count = 0;
        
        for(int c = n-1; c >= 2; c--)
        {
            int a = 0, b = c - 1;
            
            while(a < b)
            {
                if(arr[a] + arr[b] > arr[c])
                {
                    count += b - a;
                    b--;
                }
                else
                {
                    a++;
                }
            }
        }
        cout<<count;
    return 0;
}
