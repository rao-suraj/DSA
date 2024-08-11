/*
Mistakes
You didn't look into all the edge cases.

K closest elements

class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        int centerIdx =0 ;
        int i = 0;
        int j= n -1;
        
        while(i < j) {
            int mid = (i + j) / 2;
            if(arr[mid] == x) {
                centerIdx = mid; 
                break;
            } else if(arr[mid] < x) {
                i = mid + 1;
            } else {
                j = mid;
            }
            centerIdx = i;
        }
        i = j = centerIdx;
        // cout<<arr[centerIdx]<<endl;
        vector<int> ans;
        while (i >= 0 & j < n & k != 0) {
            if(arr[i] - x == 0 | arr[j] - x == 0) {
                i--;
                j++;
            } else if(arr[i] == arr[j]) {
                i--;
            } else{
                int leftDff = abs(x - arr[i]);
                int rigtDff = abs(arr[j] - x);
                
                if(leftDff == rigtDff) {
                    ans.push_back(arr[j]);
                    j++;
                }else if(leftDff < rigtDff) {
                    ans.push_back(arr[i]);
                    i--;
                } else {
                    ans.push_back(arr[j]);
                    j++;
                }
                k--;
            }
        }
        
        while(i >= 0 & k!= 0) {
            ans.push_back(arr[i]);
            i--;
            k--;
        }
        while(j <n & k!= 0) {
            ans.push_back(arr[j]);
            j++;
            k--;
        }
        
        while(k != 0) {
            ans.push_back(0);
            k--;
        }
        return ans;
    }
};
*/