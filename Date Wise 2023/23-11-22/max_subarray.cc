// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int sum=0,mxSum=INT_MIN;

//         for(int i=0;i<nums.size();i++) {
//             if(nums[i] > sum+nums[i]) {
//                 sum=nums[i];
//             } else {
//                 sum+=nums[i];
//             }
//             if(sum>mxSum) {
//                 mxSum=sum;
//             }
//         }
//         return mxSum;
//     }
// };


/* USING if insted of max will improve the time complixity */