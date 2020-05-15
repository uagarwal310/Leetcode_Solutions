//https://leetcode.com/problems/search-a-2d-matrix/submissions/
class Solution
{
public:
    Solution()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    bool searchMatrix(vector<vector<int> > &matrix, int target)
    {
        int row_num = matrix.size();
        if (row_num == 0)
            return false;
        int col_num = matrix[0].size();
        if (col_num == 0)
            return false;
        int begin = 0, end = row_num * col_num - 1;
        while (begin <= end)
        {
            int mid = (begin + end) / 2;
            int mid_value = matrix[mid / col_num][mid % col_num];
            if ( mid_value == target)
                return true;
            else if (mid_value < target)
                begin = mid + 1;
            else
                end = mid - 1;
        }
        return false;
    }
};