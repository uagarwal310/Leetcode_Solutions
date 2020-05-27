//https://leetcode.com/problems/build-an-array-with-stack-operations/
#include<bits/stdc++.h>
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n)
    {
        vector<int> aa, ansa;
        for (int i = 1; i <= n; i++)
            aa.push_back(i);
        int tt = 0;
        int pp = 0;
        vector<string> ans;
        while (ansa.size() < target.size())
        {
            cout << target[tt] << ' ' << aa[pp] << endl;
            if (target[tt] == aa[pp])
            {
                ans.push_back("Push");
                ansa.push_back(aa[pp]);
                tt++;
                pp++;
            }
            else
            {
                pp++;
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        if (ans[ans.size() - 1] == "Pop")
            ans.pop_back();
        return ans;
    }
};