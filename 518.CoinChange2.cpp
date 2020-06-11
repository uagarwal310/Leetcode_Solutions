//https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3353/
class Solution
{
public:
    int change(int amount, vector<int>& coins)
    {
        vector<int> aa(amount + 1, 0);
        aa[0] = 1;
        for (int c : coins)
        {
            for (int j = c; j <= amount; j++)
                aa[j] += aa[j - c];
        }
        return aa[amount];
    }
};