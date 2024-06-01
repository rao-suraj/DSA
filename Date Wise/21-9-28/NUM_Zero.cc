#include<iostream>

using namespace std;

int main()
{
    int arr[]={1,1,1,0,0};
    int n=sizeof(arr)/sizeof(0);
    int high=n-1;
    int low=0;
    int sum=0;
    int mid=0;
    while(low<=high)
    {
        if(low==high)
        {
            if(arr[low]==0)
            {
            sum+=1;
            break;
            }
        }
        mid=(low+high)/2;
        if(arr[mid]==0)
        {
            cout<<sum<<endl;
            cout<<mid<<high<<endl;
            sum+=(high-mid)+1;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<sum;
    return 0;
}