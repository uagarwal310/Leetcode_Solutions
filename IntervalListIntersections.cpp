//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3338/
#include<bits/stdc++.h>
class Solution
{
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B)
    {
        vector<vector<int>> ans;
        for (int i = 0, j = 0; i < A.size() && j < B.size(); A[i][1] > B[j][1] ? ++j : ++i)
        {
            int a = max(A[i][0], B[j][0]);
            int b = min(A[i][1], B[j][1]);
            vector<int> aa;
            aa.push_back(a);
            aa.push_back(b);
            if (a <= b)
                ans.push_back(aa);
        }
        return ans;
    }
};