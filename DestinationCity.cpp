//https://leetcode.com/contest/weekly-contest-187/problems/destination-city/
#include<bits/stdc++.h>
class Solution {
public:
    string destCity(vector<vector<string>>& paths)
    {
        unordered_map<string, int> ans;
        vector<string> ans2;
        for (int i = 0; i < paths.size(); i++)
        {
            if (ans[paths[i][0]] == 0)
                ans2.push_back(paths[i][0]);
            if (ans[paths[i][1]] == 0)
                ans2.push_back(paths[i][1]);
            ans[paths[i][0]] = -1;
            if (ans[paths[i][1]] != -1)
                ans[paths[i][1]] = 1;
        }
        for (int i = 0; i < ans2.size(); i++)
        {
            if (ans[ans2[i]] == 1)
                return ans2[i];
        }
        return "";
    }
};