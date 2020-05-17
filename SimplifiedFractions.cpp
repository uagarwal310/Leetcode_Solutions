//https://leetcode.com/contest/biweekly-contest-26/problems/simplified-fractions/
#include<bits/stdc++.h>
class Solution {
public:
    vector<string> simplifiedFractions(int n)
    {
        unordered_map<float, int> ans;
        vector<string> check;
        if (n == 1)
            return check;
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j < i; j++)
            {
                float f = (j) * 1.0 / (i);
                if (ans[f] == 1)
                    continue;
                string s1 = to_string(j);
                string s2 = to_string(i);
                s1 = s1 + '/' + s2;
                check.push_back(s1);
                ans[f] = 1;
            }
        }
        return check;
    }
};