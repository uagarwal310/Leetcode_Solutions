//https://leetcode.com/problems/house-robber/submissions/
#include<bits/stdc++.h>
class Solution {
public:
    int rob(vector<int>& nums)
    {
        int len = nums.size();
        if (len == 0)
            return 0;
        if (len == 1)
            return nums[0];
        if (len == 2)
            return max(nums[0], nums[1]);
        vector<int> ans(len);
        ans[0] = nums[0];
        ans[1] = max(nums[0], nums[1]);
        for (int i = 2; i < nums.size(); i++)
        {
            ans[i] = max(ans[i - 1], ans[i - 2] + nums[i]);
        }
        return max(ans[len - 2], ans[len - 1]);
    }
};