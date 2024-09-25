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

#include <iostream>

using namespace std;

int main()
{
    int x = 2, n = 2;
    double ans = 1; // To store the result
    long nn = n;    // Use long to avoid overflow with large negative n

    // If n is negative, convert it to positive for easier calculation
    if (nn < 0)
    {
        nn = -nn;
    }

    // Loop until nn becomes 0
    while (nn > 0)
    {
        cout<<nn<<"  "<<x<<endl;
        // If nn is odd, multiply the result with current x
        if (nn % 2 == 1)
        {
            cout<<"FIRST"<<endl;
            ans *= x;
            nn--; // Reduce nn by 1 if it's odd
        }
        else
        {
            cout<<"SECOND"<<endl;
            x *= x;  // Square the base
            nn /= 2; // Divide nn by 2
        }
    }

    // If n is negative, return the reciprocal of the result
    if (n < 0)
    {
        ans = 1 / ans;
    }
    return 0;
}