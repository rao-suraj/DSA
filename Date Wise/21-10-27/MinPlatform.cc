// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int arr[]={900, 940, 950, 1100, 1500, 1800};
//     int dep[]={910, 1200, 1120, 1130, 1900, 2000};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     map<int,int> Platform;
//         int count=1;
//     	for(int i=0;i<n-1;i++)
//     	{
//     	    if(dep[i]<arr[i+1] & i+1<n)
//     	    {
//     	        i++;
//     	    }
//     	    else
//     	    {
//     	        if(count>=2)
//     	        {
//                     cout<<count<<endl;
//     	            bool flag=false;
//     	            for(int j=1;j<=count;j++)
//     	            {
//                         cout<<j<<endl;
//     	                if(Platform[j]<arr[i+1] & i+1<n)
//     	                {
//     	                    Platform[j]=dep[i+1];
//     	                    flag=true;
//     	                    i++;
//                             // cout<<j<<endl<<i+1<<endl;
//                             cout<<"BREsk";
//                             // break;
//     	                }
//     	            }
//     	                if(flag==false)
//     	                {
//                             cout<<"RUN"<<endl;
//     	                    Platform[count+1]=dep[i+1];
//     	                    count++;
//     	                    i++;
//     	                }
//     	        }
//     	        else
//     	        {
//     	            Platform[1]=dep[i];
//     	            Platform[2]=dep[i+1];
//     	            count=count+1;
//     	            i++;
//     	        }
//     	    }
//     	}
//         cout<<count;
//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={900, 940, 950, 1100, 1500, 1800};
    int dep[]={910, 1200, 1120, 1130, 1900, 2000};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=1;
    int j=0;
    int CurrPlatforms=1;
    int MaxPlat=1;
    while(i<n & j<n)
    {
        if(arr[i]>dep[j])
        {
            j++;
            CurrPlatforms-=1;
        }
        else
        {
            i++;
            CurrPlatforms+=1;
        }
        MaxPlat=max(MaxPlat,CurrPlatforms);
    }
    cout<<MaxPlat;
    return 0;
}