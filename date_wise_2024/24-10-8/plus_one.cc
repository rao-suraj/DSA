/* 
class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
        for(int i = N-1;i>=0;i--){
            if(arr[i] < 9){
                arr[i]++;
                return arr;
            }
           arr[i] = 0;
        }
        arr.insert(arr.begin() , 1);
        return arr;
    }
};

    vector<int> increment(vector<int> arr ,int N) { 
        int i=0;
        // unnecessary complication.
        int carry = 1;
        reverse(arr.begin(),arr.end());
        while(carry) {
            if(i== N) {
                arr.push_back(carry);
                carry=0;
            } else if(arr[i] + carry > 9 ) {
                arr[i]=0;
                i++;
            } else {
                arr[i]+=1;
                carry=0;
            }
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
*/