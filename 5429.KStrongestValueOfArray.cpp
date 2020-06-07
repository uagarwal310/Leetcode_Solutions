//https://leetcode.com/contest/weekly-contest-192/problems/the-k-strongest-values-in-an-array/
#include<bits/stdc++.h>
bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first > b.first;
}
class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k)
    {
        sort(arr.begin(), arr.end());
        int m, l = arr.size();
        if (l % 2 == 0)
            m = (arr[(l - 1) / 2]);
        else
            m = arr[l / 2];
        vector<int> ans;
        int s = 0, e = l - 1;
        while (s <= e && ans.size() < k)
        {
            int sa = abs(arr[s] - m);
            int se = abs(arr[e] - m);
            if (se >= sa)
            {
                ans.push_back(arr[e]);
                e--;
            }
            else
            {
                ans.push_back(arr[s]);
                s++;
            }
        }
        return ans;
    }
};