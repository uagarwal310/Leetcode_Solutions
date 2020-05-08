//https://leetcode.com/problems/coin-change
#include<bits/stdc++.h>
class Solution {
public:
    Solution()
    {
        //ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int coinChange(vector<int>& coins, int amount)
    {
        vector<int> ans(amount + 1, amount + 1);
        int size = coins.size();
        /*for(int i=0;i<=amount;i++)
            ans.push_back(amount+1);*/
        ans[0] = 0;
        for (int i = 1; i <= amount; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (i - coins[j] > 0)
                    ans[i] = min(ans[i], ans[i - coins[j]] + 1);
                else if (i == coins[j])
                {
                    ans[i] = 1;
                    break;
                }
            }
        }
        return (ans[amount] > amount) ? -1 : ans[amount];
    }
};