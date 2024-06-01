#include<iostream>

using namespace std;
int Maxofarr(int arr[],int n,int max,int k)
{
    int arr1[n+1];
    int arr2[n+1];
    if(k>1)
    {   
        // cout<<"part1"<<endl;
        // cout<<"k="<<k<<endl;
        int max2=0,n1,n2,n3,n4;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[max2] && max!=i)
            {
                max2=i;
            }
        }
        // cout<<"max2="<<arr[max2]<<"max="<<arr[max]<<endl;
        if(arr[max]==arr[max2])
        {
            // cout<<"Same";
            if(arr[max]%2==0)
            {
                n1=n3=n2=n4=arr[max]/2;
            }
            {
                n1=n3=arr[max]/2;
                n2=n4=(arr[max]/2)+1;
            }
        }
        else 
        {
            // cout<<"Not same"<<endl;
            n1=arr[max2];
            n2=arr[max]-arr[max2];
            if(arr[max]%2==0)
            {
                n3=n4=arr[max]/2;
            }
            else
            {
                n3=arr[max]/2;
                n4=(arr[max]/2)+1;
            }
            // cout<<n1<<n2<<n3<<n4<<endl;
        }
        // cout<<"max="<<max<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        int nmax1=0,nmax2=0;
        for(int i=0;i<n;i++)
        {
            if(i==max)
            {
                arr1[i]=n1;
            }
            else
            {
                arr1[i]=arr[i];
            }
            if(arr1[i]>arr1[nmax1])
            {
                nmax1=i;
            }
        }
        arr1[n]=n2;
        if(arr1[n]>arr1[nmax1])
        {
            nmax1=n;
        }
        // cout<<"new max"<<arr1[nmax1]<<endl;
        for(int i=0;i<n;i++)
        {
            if(i==max)
            {
                arr2[i]=n3;
            }
            else
            {
                arr2[i]=arr[i];
            }
            if(arr2[i]>arr2[nmax2])
            {
                nmax2=i;
            }
        }
        arr2[n]=n4;
        if(arr2[n]>arr2[nmax2])
        {
            nmax2=n;
        }
        // for(int i=0;i<n+1;i++)
        // {
        //     cout<<arr1[i]<<"  "<<arr2[i]<<endl;
        // }
        // cout<<"*******"<<arr1[nmax1]<<endl;
        // cout<<"*******"<<arr2[nmax2]<<endl;
        int ans1=Maxofarr(arr1,n+1,nmax1,k-1);
        int ans2=Maxofarr(arr2,n+1,nmax2,k-1);
        cout<<"ans1="<<ans1<<endl;
        cout<<"ans2="<<ans2<<endl;
        return min(ans1,ans2);
        cout<<"Return"<<endl;
    }
    else 
    {
        cout<<"*****Part2*****"<<endl;
       int max2=0,n1,n2,n3,n4;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[max2] && max!=i)
            {
                max2=i;
            }
        }
        // cout<<"max2="<<arr[max2]<<"max="<<arr[max]<<endl;
        if(arr[max]==arr[max2])
        {
            cout<<"Same";
            if(arr[max]%2==0)
            {
                n1=n3=n2=n4=arr[max]/2;
            }
            {
                n1=n3=arr[max]/2;
                n2=n4=(arr[max]/2)+1;
            }
        }
        else 
        {
            cout<<"Not same"<<endl;
            n1=arr[max2];
            n2=arr[max]-arr[max2];
            if(arr[max]%2==0)
            {
                n3=n4=arr[max]/2;
            }
            else
            {
                n3=arr[max]/2;
                n4=(arr[max]/2)+1;
            }
            cout<<n1<<n2<<n3<<n4<<endl;
        }
        cout<<"max="<<arr[max]<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        int nmax1=0,nmax2=0;
        for(int i=0;i<n;i++)
        {
            if(i==max)
            {
                arr1[i]=n1;
            }
            else
            {
                arr1[i]=arr[i];
            }
            if(arr1[i]>arr1[nmax1])
            {
                nmax1=i;
            }
        }
        arr1[n]=n2;
        if(arr1[n]>arr1[nmax1])
        {
            nmax1=n;
        }
        for(int i=0;i<n;i++)
        {
            if(i==max)
            {
                arr2[i]=n3;
            }
            else
            {
                arr2[i]=arr[i];
            }
            if(arr2[i]>arr2[nmax2])
            {
                nmax2=i;
            }
        }
        arr2[n]=n4;
        if(arr2[n]>arr2[nmax1])
        {
            nmax2=n;
        }
        cout<<"max1="<<arr1[nmax1]<<endl;
        cout<<"max2="<<arr2[nmax2]<<endl;
        int a= min(arr1[nmax1],arr2[nmax2]);
        cout<<"a="<<a<<endl;
        return a;
    }

}

int main()
{
    int arr[]={2,4,8,2};
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[max])
        {
            max=i;
        }
    }
    cout<<Maxofarr(arr,n,max,k);
    return 0;
}