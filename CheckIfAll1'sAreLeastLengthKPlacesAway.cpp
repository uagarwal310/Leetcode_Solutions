/*https://leetcode.com/contest/weekly-contest-187/problems/check-if-all-1s-are-at-least-length-k-places-away/*/
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k)
    {
        if (k == 0)
            return true;
        vector<int> ans;
        int prev = -2 * k;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                cout << i << ' ' << prev << endl;
                if (i - prev <= k)
                {
                    return false;
                }
                prev = i;
            }

        }
        return true;
    }
};