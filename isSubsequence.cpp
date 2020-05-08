//https://leetcode.com/problems/is-subsequence/submissions/
#include<bits/stdc++.h>
#include<string>
class Solution
{
public:
    Solution()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    bool isSubsequence(string s, string t)
    {
        if (s.length() == 0)
            return true;
        if (s.length() > t.length())
            return false;
        //string s="";
        int ini = 0;
        for (int i = 0; i < t.length(); i++)
        {
            if (s[ini] == t[i])
            {
                ini++;
                if (ini == s.length())
                    return true;
            }
        }
        return false;
    }
};