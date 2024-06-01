// my solution
//   string longestCommonPrefix (string arr[], int n)
//     {
//         char val;
//         int largest=0;
//         string ans="-1";
//         for(int i=0;i<n;i++) {
//                 // cout<<arr[i].size();
//             if(arr[i].size()>largest) {
//                 largest=arr[i].size();
//             }
//         }
//         // cout<<largest;
//         for(int j=0;j<largest;j++) {
//             val=arr[0][j];
//             // cout<<val;
//             for(int i=0;i<n;i++) {
//                 if(arr[i][j] != val) {
//                     return ans;
//                 } 
//             }
//             if(ans == "-1") {
//                 ans=val;
//             } else {
//                 ans=ans+val;
//             }
//         }
//         // return ans;
//     }


// Second method
        // sort(arr,arr+n);
        // string firstString=arr[0];
        // for(int i=0;i<n;i++) {
        //     int size=firstString.size();
        //     if(arr[i].substr(0,size) != firstString) {
        //         i=0;
        //         firstString.pop_back();
        //     } 
        // }
        // if(firstString.size()==0) {
        //     return "-1";
        // } else {
        //     return firstString;
        // }