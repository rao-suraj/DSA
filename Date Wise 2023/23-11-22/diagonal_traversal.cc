// int temp=nums[i].size();
// n=max(m,temp);  
/*
1. This will not give an error but giving directy gives an 
error because .size() returns size_t
2. Search for patterns and try to observe all the test case.
3. don't directly code.
4. finding optimal can be easy. By using STD
*/

/* My solution */
//   vector<int> ans;
//         int m=nums.size(),n=0,i,j;
//         for(i=0;i<m;i++) {
//             n=max(n,static_cast<int>(nums[i].size()));            
//         }
//         int big=max(n,m);
//         for(int k=0;k<big*2;k++) {
//             // cout<<"m="<<m<<"n="<<n<<endl;
//             for(int i=0;i<big;i++) {
//                 for(int j=0;j<big;j++) {   
//                     if(j<m && i<nums[j].size() ) {
//                         // cout<<nums[j][i];
//                         if(abs(i+j) == k) {
//                             ans.push_back(nums[j][i]);
//                         }
//                     }
//                 }
//                 // cout<<endl;
//             }
//         }
//         return ans;

/* Better solution */
        // for(int i=0;i<m;i++) {
        //     int tempI=i;
        //     j=0;
        //     while(tempI>=0)  {
        //         if(nums[tempI].size()>j) {
        //             ans.push_back(nums[tempI][j]);
        //         }
        //         j++;
        //         tempI--;
        //     }
        // }
        // for(j=1;j<n;j++) {
        //     int tempJ=j;
        //     i=m-1;
        //     while(i>=0) {
        //         if(nums[i].size()> tempJ) {
        //             ans.push_back(nums[i][tempJ]);
        //         }
        //         i--;
        //         tempJ++;
        //     }
        // }
        // return ans;
    // }

