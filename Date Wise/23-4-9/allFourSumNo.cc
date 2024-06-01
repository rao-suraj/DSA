// // #include<iostream>
// // #include<bits/stdc++.h>
// // using namespace std;

// // void fourSum(int arr[],int n,int sum)
// // {
// //     for(int i=n-1;i>=3;i--)
// //     {
// //         for(int j=i-1;j>=2;j--)
// //         {
// //             int a=0,b=j-1,c=j;
// //             while (a<b)
// //             {
// //                 int curSum=arr[i]+arr[a]+arr[b]+arr[c];
// //                 if(curSum==sum)
// //                 {
// //                     cout<<arr[a]<<" "<<arr[b]<<" "<<arr[c]<<" "<<arr[i]<<" "<<endl;
// //                     a++;
// //                 }
// //                 else if(curSum<sum)
// //                 {
// //                     while(arr[a]==arr[a++])
// //                     {
// //                         a++;
// //                     }
// //                     a++;
// //                 }
// //                 else
// //                 {
// //                     while(arr[b]==arr[a--])
// //                     {
// //                         b--;
// //                     }
// //                     b--;
// //                 }
// //             }
// //         }
// //     }
// // }

// // int main()
// // {
// //     int arr[] = {0,0,2,1,1};
// //     int n=5;
// //     int sum=3;
// //     sort(arr,arr+n);
// //     fourSum(arr,n,sum);
// //     return 0;
// // }


//   int n=arr.size();
//         sort(arr.begin(),arr.end());
//         vector<vector<int>> ans;
//         set<vector<int>> s;
//         for(int i=0;i<=n-4;i++)
//         {
//             for(int j=i+1;j<=n-3;j++)
//             {   
//                 int a=j,b=j+1,c=n-1;
//                 vector<int> temp;
//                     while (b<c)
//                     {
//                         temp.clear();
//                         int curSum=arr[i]+arr[a]+arr[b]+arr[c];
//                         if(curSum==sum)
//                         {
//                             temp.push_back(arr[i]);
//                             temp.push_back(arr[a]);
//                             temp.push_back(arr[b]);
//                             temp.push_back(arr[c]);
//                             s.insert(temp);
//                                 b++;
//                         }
//                         else if(curSum<sum)
//                         {
//                                 b++;
//                         }
//                         else
//                         {
//                             c--;
//                         }
//                     }
//             }
//         }
//         for(auto it:s)
//         {
//             ans.push_back(it);
//         }