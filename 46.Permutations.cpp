//https://leetcode.com/problems/permutations/
class Solution {
public:
    void count(vector<vector<int>>& ans, int begin, vector<int> nums)
    {
        if (begin == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for (int i = begin; i < nums.size(); i++)
        {
            swap(nums[begin], nums[i]);
            count(ans, begin + 1, nums);
            swap(nums[begin], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        count(ans, 0, nums);
        return ans;
    }
};