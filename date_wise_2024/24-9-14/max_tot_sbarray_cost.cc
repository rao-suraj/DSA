#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int dp[10000][10000] = {0};

long long getCost(vector<int> nums, int st, int ed)
{
    int product = 0;
    bool key = true;
    for (int i = st; i <= ed; i++)
    {
        if (key)
        {
            product += nums[i];
            key = !key;
        }
        else
        {
            product -= nums[i];
            key = !key;
        }
    }
    return product;
}

long long getMaxCost(vector<int> nums)
{
    if (nums.size() == 0)
    {
        return 0;
    }
    if (nums.size() == 1)
    {
        return abs(nums[0]);
    }

    int max = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        vector<int> temp = nums;
        temp.erase(temp.begin(), temp.begin() + i + 1);
        int value;
        if(dp[i+1][nums.size()] != 0) {
            value = getCost(nums, 0, i) + getMaxCost(temp);
        } else {
            dp[i+1][nums.size()] = getMaxCost(temp);
            value = getCost(nums,0,i) + dp[i+1][nums.size()];
        }
        if (value > max)
        {
            max = value;
        }
    }
    return max;
}

int main()
{
    vector<int> vec = {1, -1, 1, -1};

    int ans;
    ans = getMaxCost(vec);
    // ans = getCost({1,-1,0,3},1,3);
    cout << ans;
    return 0;
}