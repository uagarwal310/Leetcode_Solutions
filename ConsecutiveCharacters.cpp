//https://leetcode.com/contest/biweekly-contest-26/problems/consecutive-characters/
class Solution {
public:
    int maxPower(string str)
    {
        if (str.length() == 0)
            return 0;
        char prev = '\0';
        int len = 0, curlen = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == prev)
            {
                curlen++;
                if (curlen > len)
                    len = curlen;
            }
            else
            {
                curlen = 1;
                prev = str[i];
            }
        }
        if (curlen > len)
            len = curlen;
        return len;
    }
};