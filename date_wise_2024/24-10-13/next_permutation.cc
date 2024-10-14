/*
31. Next Permutation

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        int n = nums.size() - 2;
        
        // Step 1: Find the first decreasing element from the right
        for (int i = n; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }
        
        // Step 2: If no such element exists, reverse the array
        if (index == -1) {
            reverse(nums.begin(), nums.end());
        } else {
            // Step 3: Find the smallest element larger than nums[index] and swap
            for (int i = nums.size() - 1; i > index; i--) {
                if (nums[i] > nums[index]) {
                    swap(nums[i], nums[index]);
                    break;
                }
            }
            // Step 4: Reverse the elements after the index
            reverse(nums.begin() + index + 1, nums.end());
        }
    }
};


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        multiset<int> st;
        int size= nums.size();
        st.insert(nums[size-1]);
        int i=size-2;
        set<int> :: iterator stPtr;
        while(i>=0) {
            stPtr = st.begin();
            while(nums[i] >= *stPtr && stPtr != st.end()){
                stPtr++;
            }
            if(stPtr != st.end()) {
                int temp = nums[i];
                nums[i] = *stPtr;
                st.erase(stPtr);
                st.insert(temp);
                stPtr=st.begin();
                i++;
                while(stPtr != st.end()) {
                    nums[i] = *stPtr;
                    stPtr++;
                    i++;
                }
                return;
            } else {
                st.insert(nums[i]);
                i--;
            }
        }
        stPtr = st.begin();
        i=0;
        while(stPtr != st.end()) {
            nums[i] = *stPtr;
            stPtr++;
            i++;
        }
    }
};

next_permutation(nums.begin(),nums.end());

*/