/*

    int majorityElement(vector<int>& arr) {
       int count = 0;
       int element = 0;
       for(int i=0;i<arr.size();i++) {
        if(count == 0) {
            element = arr[i];
            count++;
        } else if(element != arr[i]) {
            count --;
        } else {
            count ++;
        }
       }
       return element;
    }


        int majorityElement(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++) {
            mp[arr[i]]++;
        }
        int max=INT_MIN;
        int maxEle=0;
        for(int i=0;i<arr.size();i++) {
            if(max < mp[arr[i]]) {
                max = mp[arr[i]];
                maxEle = arr[i];
            }
        }
        return maxEle;
    }

*/