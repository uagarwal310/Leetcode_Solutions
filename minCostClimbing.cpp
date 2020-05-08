//https://leetcode.com/problems/min-cost-climbing-stairs/submissions/
#include<bits/stdc++.h>
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost)
    {
        vector<int> ans(cost.size() + 1);
        ans[0] = cost[0];
        ans[1] = cost[1];
        int len = cost.size();
        for (int i = 2; i < len; i++)
        {
            ans[i] = min(ans[i - 1], ans[i - 2]) + cost[i];
        }
        return min(ans[len - 1], ans[len - 2]);

    }
};