//https://leetcode.com/contest/weekly-contest-191/problems/maximum-product-of-two-elements-in-an-array/
class Solution
{
public:
    int maxProduct(vector<int>& nums)
    {
        int first = max(nums[0], nums[1]) - 1;
        int second = min(nums[0], nums[1]) - 1;
        for (int i = 2; i < nums.size(); i++)
        {
            if (nums[i] - 1 > first)
            {
                second = first;
                first = nums[i] - 1;
            }
            else if (nums[i] - 1 > second)
                second = nums[i] - 1;
        }
        return first * second;
    }
};