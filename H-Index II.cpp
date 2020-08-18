//https://leetcode.com/explore/featured/card/june-leetcoding-challenge/541/week-3-june-15th-june-21st/3364/
class Solution
{
public:
    int hIndex(vector<int>& c)
    {
        int size = c.size();
        int low = 0, high = size;
        while (low < high)
        {
            int mid = (low + high) / 2;
            int no = size - mid;
            if (c[mid] >= no)
                high = mid;
            else
                low = mid + 1;
        }
        return size - high;
    }
};