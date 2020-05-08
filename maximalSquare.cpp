//https://leetcode.com/problems/maximal-square/
#include<bits/stdc++.h>
class Solution
{
public:
    int maximalSquare(vector<vector<char>>& matrix)
    {
        if (matrix.empty()) {
            return 0;
        }
        int m = matrix.size(), n = matrix[0].size(), ans = 0;
        vector<vector<int>> dp(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (!i || !j || matrix[i][j] == '0')
                {
                    dp[i][j] = matrix[i][j] - '0';
                }
                else
                {
                    dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
                }
                ans = max(dp[i][j], ans);
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << dp[i][j] << ' ';
            }
            cout << '\n';
        }
        cout << '\n';
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << matrix[i][j] << ' ';
            }
            cout << '\n';
        }
        return ans * ans;
    }
};