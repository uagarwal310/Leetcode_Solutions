//https://leetcode.com/explore/featured/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3377/
class Solution {
public:
    int arrange(int n, int i)
    {
        if (n < i)
            return 0;
        return 1 + arrange(n - i, i + 1);
    }
    int arrangeCoins(int n)
    {
        return arrange(n, 1);

    }
};