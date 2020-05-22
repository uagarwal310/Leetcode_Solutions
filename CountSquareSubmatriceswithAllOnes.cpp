//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3336/
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int ans[m][n];
        //ans[m-1][n-1]=1;
        int count = 0;
        if (matrix[0][0] == 0)
            ans[0][0] = 0;
        else
            ans[0][0] = 1;
        for (int i = 0; i < n; i++)
        {
            if (matrix[0][i] == 1)
            {
                ans[0][i] = 1;
                count++;
            }
            else
                ans[0][i] = 0;
        }
        for (int i = 0; i < m; i++)
        {
            if (matrix[i][0] == 1)
            {
                ans[i][0] = 1;
                count++;
            }
            else
                ans[i][0] = 0;
        }
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    ans[i][j] = 0;
                }
                else
                {
                    if (matrix[i - 1][j - 1] == 0)
                    {
                        count++;
                        ans[i][j] = 1;
                    }
                    else
                    {
                        int a = ans[i - 1][j - 1];
                        int c = 1;
                        count++;
                        for (int k = 1; k <= a; k++)
                        {
                            if (matrix[i - k][j] == 1 && matrix[i][j - k] == 1)
                            {
                                c++;
                                count++;
                            }
                            else
                            {
                                break;
                            }
                        }
                        ans[i][j] = c;
                    }
                }
            }
        }
        count = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                count += ans[i][j];
                cout << ans[i][j] << ' ';
            }
            cout << endl;
        }
        return count;
    }
};