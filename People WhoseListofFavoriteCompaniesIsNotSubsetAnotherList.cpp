/*https://leetcode.com/contest/weekly-contest-189/problems/people-whose-list-of-favorite-companies-is-not-a-subset-of-another-list/*/
#include<bits/stdc++.h>
class Solution
{
public:
    Solution()
    {
        ios_base::sync_with_stdio(0);
    }
    vector<int> common(vector<int> vector1, vector<int> vector2)
    {
        vector<int> v(vector1.size() + vector2.size());
        vector<int>::iterator it, st;
        vector<int> c;

        it = set_intersection(vector1.begin(),
                              vector1.end(),
                              vector2.begin(),
                              vector2.end(),
                              v.begin());
        for (st = v.begin(); st != it; ++st)
            c.push_back(*st);
        return c;
    }
    vector<int> peopleIndexes(vector<vector<string>>& fav)
    {
        unordered_map<string, vector<int>> ans;
        for (int j = 0; j < fav.size(); j++)
        {
            for (int k = 0; k < fav[j].size(); k++)
                ans[fav[j][k]].push_back(j);
        }
        vector<int> ret;
        for (int j = 0; j < fav.size(); j++)
        {
            int f = 1;
            vector<int> c = ans[fav[j][0]];
            for (int k = 1; k < fav[j].size(); k++)
            {
                c = common(c, ans[fav[j][k]]);
            }
            if (c.size() == 1)
                ret.push_back(j);
        }

        return ret;
    }
};