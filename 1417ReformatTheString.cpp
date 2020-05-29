//https://leetcode.com/contest/weekly-contest-185/problems/reformat-the-string/
class Solution {
public:
    int abs(int a)
    {
        if (a > 0)
            return a;
        return -1 * a;
    }
    string reformat(string s)
    {
        vector<char> num, chr;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                chr.push_back(s[i]);
            else
                num.push_back(s[i]);
        }
        string ss = "";
        int n = 0, c = 0;
        if (abs(num.size() - chr.size()) > 1)
            return "";
        if (num.size() > chr.size())
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (i % 2 == 0)
                    ss += num[n++];
                else
                    ss += chr[c++];
            }
        }
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (i % 2 == 1)
                    ss += num[n++];
                else
                    ss += chr[c++];
            }
        }
        return ss;
    }
};