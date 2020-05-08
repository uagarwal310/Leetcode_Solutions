//https://leetcode.com/contest/weekly-contest-183/problems/minimum-subsequence-in-non-increasing-order/
#include<vector>
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums)
    {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int size = nums.size();
        ans.push_back(nums[--size]);
        int sumincluded = nums[size];
        int sumexcluded = 0;
        nums.pop_back();
        for (int i = 0; i < size; i++)
        {
            if (sumexcluded + nums[i] < sumincluded)
            {
                sumexcluded += nums[i];
            }
            else
            {
                sumexcluded += nums[i];
                sumincluded += nums[size - 1];
                ans.push_back(nums[size - 1]);
                size--;
                nums.pop_back();
            }
        }
        cout << sumexcluded << ' ' << sumincluded;
        return ans;

    }
};