//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3332/
#include<bits/stdc++.h>
class Solution
{
public:
    Solution()
    {
        ios_base::sync_with_stdio(0);
    }
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> goal(26), cur(26), res;
        for (char c : p) goal[c - 'a']++;
        for (int i = 0; i < s.size(); i++)
        {
            cur[s[i] - 'a']++;
            if (i >= p.size()) cur[s[i - p.size()] - 'a']--;
            if (cur == goal) res.push_back(i - p.size() + 1);
        }
        return res;
    }
};