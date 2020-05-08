//https://leetcode.com/contest/biweekly-contest-25/problems/kids-with-the-greatest-number-of-candies/
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        int len = candies.size();
        vector<bool> ans;
        int  max = -1;
        for (int i = 0; i < len; i++)
        {
            if (candies[i] > max)
                max = candies[i];
        }
        for (int i = 0; i < len; i++)
        {
            if (candies[i] + extraCandies >= max)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};