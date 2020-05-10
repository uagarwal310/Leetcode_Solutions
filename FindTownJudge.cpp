//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3325/
#include<bits/stdc++.h>
class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust)
    {
        int judge = -1;
        unordered_map<int, int> count;
        unordered_map<int, int> check;
        for (int i = 0; i < trust.size(); i++)
        {
            count[trust[i][1]]++;
            check[trust[i][0]]++;
        }
        for (int i = 1; i <= N; i++)
        {
            if (count[i] == N - 1 && check[i] == 0)
                return i;
        }
        return -1;
    }
};