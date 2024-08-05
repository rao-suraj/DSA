/*
    Longest Sub-Array with Sum K
    Issus faced.
    You forgot all the STD libraries.
    You didn't know the method you looked into the solution.
    small syntax errors were made which you need to avoid.


    int lenOfLongSubarr(int arr[],  int n, int k) 
    {
        map<int,int> hashMap;
        int prefixSum= 0;
        int largestSum= 0;
        for(int i = 0;i< n; i++) {
            prefixSum+=arr[i];
           if(prefixSum == k) {
               largestSum = i+1;
           } else if(hashMap.find(prefixSum - k) != hashMap.end()) {
                int index = hashMap[prefixSum - k];
                int length = i - index;
                if( length > largestSum) {
                    largestSum = length;
                }
            }
            
            if(hashMap.find(prefixSum) == hashMap.end()) {
                hashMap[prefixSum]= i;
            }
        }
        return largestSum;
    }
*/