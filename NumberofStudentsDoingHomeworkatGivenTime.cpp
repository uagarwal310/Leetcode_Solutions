//https://leetcode.com/contest/weekly-contest-189/problems/number-of-students-doing-homework-at-a-given-time/
class Solution {
public:
    int busyStudent(vector<int>& s, vector<int>& e, int q)
    {
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (q >= s[i] && q <= e[i])
                count++;
        }
        return count;
    }
};