//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3337/
#include<bits/stdc++.h>
class Solution {
public:
    string frequencySort(string s)
    {
        int len = s.length();
        unordered_map<char, int> ans;
        for (int i = 0; i < len; i++)
            ans[s[i]]++;
        unordered_map<int, vector<string>> ans2;
        for (char i = ' '; i <= '~'; i++)
        {
            string ss = "";
            for (int j = 0; j < ans[i]; j++)
            {
                ss += i;
            }
            ans2[ans[i]].push_back(ss);
        }
        string ss = "";
        cout << len << endl;
        for (int i = len; i >= 0; i--)
        {
            cout << i << ' ' << ans2[i].size() << endl;;
            for (int j = 0; j < ans2[i].size(); j++)
            {
                //cout<<ans2[i][j]<<endl;
                ss += ans2[i][j];
            }
        }
        return ss;
    }
};