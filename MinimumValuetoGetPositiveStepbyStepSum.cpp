//https://leetcode.com/contest/biweekly-contest-24/problems/minimum-value-to-get-positive-step-by-step-sum/
class Solution {
public:
    int minStartValue(vector<int>& nums)
    {
        int min = 101;
        for (int i = 1;; i++)
        {
            int flag = 1;
            int sum = i;
            for (int j = 0; j < nums.size() && flag == 1; j++)
            {
                sum += nums[j];
                if (sum < 1)
                    flag = 0;
            }
            if (flag == 1)
            {
                return i;
            }
        }
        return min;
    }
};