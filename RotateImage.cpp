//https://leetcode.com/problems/rotate-image/submissions/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
    {
        int m = matrix.size();
        for (int i = 0; i < m / 2; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int t = matrix[i][j];
                matrix[i][j] = matrix[m - i - 1][j];
                matrix[m - i - 1][j] = t;
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = i; j < m; j++)
            {
                int t = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = t;
            }
        }
    }
};