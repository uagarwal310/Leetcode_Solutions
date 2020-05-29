//https://leetcode.com/contest/weekly-contest-185/problems/minimum-number-of-frogs-croaking/
#include<bits/stdc++.h>
class Solution {
public:
    int minNumberOfFrogs(string croak)
    {
        int ans = 0;
        vector<int> aa(5);
        unordered_map<char, int> count;
        count['c'] = 0;
        count['r'] = 1;
        count['o'] = 2;
        count['a'] = 3;
        count['k'] = 4;
        for (auto& s : croak)
        {
            int k = count[s];
            aa[k]++;
            ans = max(ans, aa[k]);
            if (aa[0] > 0 && aa[1] > 0 && aa[2] > 0 && aa[3] > 0 && aa[4] > 0)
            {
                aa[0]--;
                aa[1]--;
                aa[2]--;
                aa[3]--;
                aa[4]--;
            }
            if (aa[0] == 0 && aa[1] == 0 && aa[2] == 0 && aa[3] == 0 && aa[4] > 0)
                return -1;
            if (aa[0] == 0 && aa[1] == 0 && aa[2] == 0 && aa[3] > 0)
                return -1;
            if (aa[0] == 0 && aa[1] == 0 && aa[2] > 0)
                return -1;
            if (aa[0] == 0 && aa[1] > 0)
                return -1;
        }
        if (aa[0] == 0 && aa[1] == 0 && aa[2] == 0 && aa[3] == 0 && aa[4] == 0)
            return ans;
        return -1;
    }
};