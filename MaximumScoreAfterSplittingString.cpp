//https://leetcode.com/contest/weekly-contest-186/problems/maximum-score-after-splitting-a-string/
class Solution {
public:
    int maxScore(string s)
    {
        int len = s.length();
        int zero[len], one[len];
        int z = 0, o = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                z++;
            zero[i] = z;
        }
        for (int i = len - 1; i >= 0; i--)
        {
            one[i] = o;
            if (s[i] == '1')
                o++;
        }
        int max = 0;
        for (int i = 0; i < len - 1; i++)
        {
            if (zero[i] + one[i] > max)
                max = zero[i] + one[i];
        }
        return max;
    }
};