// 2 5 3 1 4 9
//  i j k 
// for=i

// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//     vector<int> A={3603, 24351, 10292, 30837, 9375, 11021, 4597, 24022, 27349, 23200, 19669, 24485, 8282, 4735, 54, 2000, 26419, 27939, 6901, 3789, 18128, 468, 3729, 14894, 24649, 22484, 17808, 2422, 14311, 6618, 22814};
//     int i=0;
//     int sum=0;
//     while(i<A.size())
//     {
//         cout<<"Fer="<<A[i]<<endl;
//         int j=i+1;
//         bool wh1=false;
//         bool wh2=false;
//         while(j<A.size())
//         {
//             if(A[i]<A[j])
//             {
//                 wh1=true;
//                 // cout<<"sc="<<A[j]<<endl;
//                 int k=j+1;
//                 while(k<A.size())
//                 {
//                     if(A[j]<A[k])
//                     {
//                         wh2=true;
//                         // cout<<"th="<<A[k]<<endl;
//                         if(wh1==true & wh2==true)
//                         {
//                             sum=max(sum,A[i]+A[j]+A[k]);
//                         }
//                     }
//                     k++;
//                 }
//             }
//             j++;
//         }
//         i++;
//     }
//     cout<<sum;
//     return 0;
// }


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> A={18468, 6335, 26501, 19170, 15725, 11479, 29359, 26963, 24465, 5706, 28146, 23282, 16828, 9962, 492, 2996, 11943, 4828, 5437, 32392, 14605};
    int sum=0;
    for(int j=1;j<A.size()-1;j++)
    {
        int i=0;
        int reqI=0;
        int sum1=0;
        // cout<<"rrr"<<endl;
        while(i<j)
        {
            if(A[i]<A[j])
            {
                if(sum1<A[i]+A[j])
                {
                    reqI=i;
                    sum1=A[j]+A[i];
                }
            }
            // cout<<"What1";
            i++;
        }
        int k=j+1;
        int reqK=0;
        int sum2=0;
        if(reqI!=0)
        {
        cout<<"Fer="<<A[i]<<endl;
        while(k<A.size())
        {
            if(A[j]<A[k])
            {
                if(sum2<A[j]+A[k])
                {
                    reqK=k;
                    // cout<<k<<endl;
                    sum2=A[j]+A[k];
                }
                // cout<<"condition";
            }
            // cout<<"dhfgj";
            cout<<"rrrrrrrrrrrrrrrrrrrrrrrrr"<<A[k]<<endl;
            k++;
        }
        }
        else
        {
            continue;
        }
        if(reqK!=j+1)
        {
        cout<<"Sec="<<A[j]<<endl;
        cout<<"Thi="<<A[k]<<endl;
        sum=max(sum,A[i]+A[j]+A[k]);
        }
        else
        {
            continue;
        }
    }
    cout<<sum;
    return 0;
}

