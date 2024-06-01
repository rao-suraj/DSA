// map<int,int> mp;
//         int count=0;
//         for(int i=0;i<n;i++)
//         {
//             if(mp.count(arr[i]))
//             {
//                 mp[arr[i]]++;
//             }
//             else
//             {
//                 mp.insert({arr[i],1});
//             }
//         }

//         sort(arr,arr+n);
//         int idx=0,h=1;
//         vector<int> arr2;
//         arr2.push_back(arr[0]);
//         while(h<n)
//         {
//             if(arr[h]==arr2[idx])
//             {
//                 h++;
//             }
//             else
//             {
//                 idx++;
//                 arr2.push_back(arr[h++]);
//             }
//         }

//         if(arr2.size()==1)
//         {
//             return mp[arr2[0]];
//         }

//         int i=0,j=arr2.size()-1;
//         int sum;
//         while(i<j)
//         {
//             sum=arr2[i]+arr2[j];
//             if(sum==k)
//             {
//                 count=count+(mp[arr2[i]]*mp[arr2[j]]);
//                 i++;
//                 j--;
//             } else if(sum<k)
//             {
//                 i++;
//             } else
//             {
//                 j++;
//             }
//         }

//         return count;

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1,5,7,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;
    unordered_map<int, int> mp;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int target = k - arr[i];
        if (mp.count(target))
        {
            cnt += mp[target];
            cout<<cnt<<"***"<<endl;
        }
        if (mp.count(arr[i]))
        {
            mp.insert({arr[i], mp[arr[i]] + 1});
        }
        else
        {
            mp.insert({arr[i], 1});
        }
        for(int i=0;i<mp.size();i++)
        {
            cout<<i<<"  "<<mp[i]<<endl;
        }
    }
    return cnt;
    return 0;
}