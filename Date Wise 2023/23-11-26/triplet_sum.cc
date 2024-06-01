/*15. 3Sum Leetcode*/

// vector<vector<int>> threeSum(vector<int>& nums) {
//     int i=0,k=i+1,j=nums.size()-1,temp;
//     sort(nums.begin(),nums.end());
//     set<vector<int>> st;
//     vector<vector<int>> ans;
//     while(k!=j && i!=j) {
//         int sum=nums[i]+nums[j]+nums[k];
//         if(sum==0){
//             st.insert({nums[i],nums[k],nums[j]});
//             // temp=nums[k];
//             // while(temp==nums[k] && k+1<j) {
//             //     k++;
//             // }
//             k++;
//         } else if(sum < 0) {
//             if(k+1 == j) {
//                 // temp=nums[i];
//                 // while(temp==nums[i] && i+1<j) {
//                 //     i++;
//                 // }
//                 i++;
//                 k=i+1;
//             } else {
//                 // temp=nums[k];
//                 // while(temp==nums[k] && k+1<j) {
//                 //     k++;
//                 // }
//                 k++;
//             }
//         } else {
//             j--;
//             // temp=nums[j];
//             // while(temp==nums[j] && j-1>i)
//             k=i+1;
//         }
//     }
//     for(auto it:st) {
//         ans.push_back(it);
//     }
//     return ans;
// }

/*
1. Vector has erase and == method
2. try out all the textcase first then code.
3. if you can use STD use it.
4. in three pointer method try to keep one pointer constand so that you get all the
   combination
5. try to learn STD.
*/

/* Better method*/
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int target = 0;
//         sort(nums.begin(), nums.end());
//         set<vector<int>> s;
//         vector<vector<int>> output;
//         for (int i = 0; i < nums.size(); i++){
//             int j = i + 1;
//             int k = nums.size() - 1;
//             while (j < k) {
//                 int sum = nums[i] + nums[j] + nums[k];
//                 if (sum == target) {
//                     s.insert({nums[i], nums[j], nums[k]});
//                     j++;
//                     k--;
//                 } else if (sum < target) {
//                     j++;
//                 } else {
//                     k--;
//                 }
//             }
//         }
//         for(auto triplets : s)
//             output.push_back(triplets);
//         return output;
//     }
// };

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    int i = 0, k = i + 1, j = nums.size() - 1, temp;
    sort(nums.begin(), nums.end());
    set<vector<int>> st;
    vector<vector<int>> ans;
    while (k != j && i != j)
    {
        int sum = nums[i] + nums[j] + nums[k];
        if (sum == 0)
        {
            st.insert({nums[i], nums[k], nums[j]});
            // temp=nums[k];
            // while(temp==nums[k] && k+1<j) {
            //     k++;
            // }
            k++;
        }
        else if (sum < 0)
        {
            if (k + 1 == j)
            {
                // temp=nums[i];
                // while(temp==nums[i] && i+1<j) {
                //     i++;
                // }
                i++;
                k = i + 1;
            }
            else
            {
                // temp=nums[k];
                // while(temp==nums[k] && k+1<j) {
                //     k++;
                // }
                k++;
            }
        }
        else
        {
            j--;
            // temp=nums[j];
            // while(temp==nums[j] && j-1>i)
            k = i + 1;
        }
    }
    for (auto it : st)
    {
        ans.push_back(it);
    }
    return ans;
}

int main()
{
    vector<int> ans = {3, 21, 4, 3, 2};
    vector<vector<int>> vll = threeSum(ans);

    for (auto it : vll)
    {
        for (auto v : it)
        {
            cout << v;
        }
        cout << "\n";
    }
    return 0;
}