#include<iostream>

using namespace std;

int binarySrc(int arr[],int l,int h,int key)
{
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(mid==key)
        {
            return mid;
        }
        else if(mid<key)
        {
            binarySrc(arr,mid+1,h,key);
        }
        else
        {
            binarySrc(arr,l,mid-1,key);
        }
    }
    return -1;
}

int main()
{
    int arr[100];
    int key=2;
    int l=0,h=2;
    while(val<key)
    {
        l=h;
        h=2*h;
        val =arr[h];
    }    
    return 0;
}