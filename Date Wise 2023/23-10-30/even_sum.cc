#include<iostream>

using namespace std;

int main()
{
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int sum=0,i=0;
    while(i!=n-1) {
        if(arr[i] % 2 == 0)
            sum+=arr[i];
        i++;
    }
    cout<<sum;
    return 0;
}