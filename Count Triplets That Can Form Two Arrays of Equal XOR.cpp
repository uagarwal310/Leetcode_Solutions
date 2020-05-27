//https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/
#include<bits/stdc++.h>
class Solution {
public:
    int countTriplets(vector<int>& arr)
    {
        int size = arr.size();
        vector<int> xx;
        xx.push_back(0);
        unordered_map<int, vector<int>> ans;
        for (int i = 0; i < size; i++)
        {
            xx.push_back(xx[i]^arr[i]);
            ans[xx[i]^arr[i]].push_back(i);
        }
        int sum = 0;
        for (int i = 0; i < size + 1; i++)
        {
            for (int j = i + 1; j < size + 1; j++)
                if (xx[i] == xx[j])
                    sum += j - i - 1;
        }
        return sum;
    }
};