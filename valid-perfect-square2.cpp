//https://leetcode.com/problems/valid-perfect-square/
#include<bits/stdc++.h>
class Solution
{
public:
    Solution()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    bool isPerfectSquare(int num)
    {
        long n = num;
        while (n * n > num)
            n = (n + num / n) >> 1;
        return (n * n == num);
    }
};