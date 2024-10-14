    // vector<int> duplicates(vector<int> arr) {
    //     int N=arr.size();
    //     vector<int> ans;
    //     for(int i=0;i<N;i++) {
    //         int var= arr[i]%N;
    //         arr[var]+=N;
    //     }
    //     for(int i=0;i<N;i++) {
    //         if(arr[i]/N > 1) {
    //             ans.push_back(i);
    //         }
    //     }
    //     if(ans.size() == 0) {
    //         return {-1};
    //     } else {
    //         return ans;
    //     }
    // }

    // T O(n)
    // S O(n)=> to store the ans