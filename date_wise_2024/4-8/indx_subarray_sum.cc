/* 
    Indexes of Subarray Sum GFG
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s) {
        int i=0,j=0;
        int sum = arr[0];
        while (j < n) {
            // cout<<i<<" "<<j;
            // cout<<endl;
            // int sum = 0;
            // for(int k = i; k <= j ; k++) {
            //     sum += arr[k];
            // }
            if(sum == s) {
                return {i+1, j+1};
            }
            if(sum < s) {
                j++;
                sum+=arr[j];
            } else if(i == j) {
                i++;
                j++;
                sum = arr[i];
            } else {
                sum-= arr[i];
                i++;
            }
        }
        return {-1};
    }
*/

