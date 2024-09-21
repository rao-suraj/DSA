/*
    class Solution {
public:
    void getCombinationSum(vector<int> candidates,vector<int> possCombinations,int pos, int target, vector<vector<int>>& ans) {
        if(target == 0) {
            ans.push_back(possCombinations);
            return;
        }

        if(target < 0) {
            return;
        }

        for(int i = pos ; i< candidates.size(); i++) {
            possCombinations.push_back(candidates[i]);
            getCombinationSum(candidates,possCombinations,i,target-candidates[i],ans);
            possCombinations.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> com ={};
        getCombinationSum(candidates,com,0,target,ans);
        return ans;
    }
};


class Solution {
public:
void findcomb(vector<vector<int>>& ans,vector<int>& ds,vector<int>& arr,int target,int index){
    if(index==arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;

    }
    if(arr[index]<=target){
        ds.push_back(arr[index]);
        findcomb(ans,ds,arr,target-arr[index],index);
        ds.pop_back();
    }
    findcomb(ans,ds,arr,target,index+1);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findcomb(ans,ds,candidates,target,0);
        return ans;
    }
};

Time complixity = 2^t * K  t=target. k=average size of the combination.

*/