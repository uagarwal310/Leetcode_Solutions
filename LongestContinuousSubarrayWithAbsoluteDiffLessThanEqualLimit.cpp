/*https://leetcode.com/contest/weekly-contest-187/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/*/
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit)
    {
        int maxlen = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int min = nums[i], max = nums[i];
            int j;
            int copy = i;
            for ( j = i + 1; j < nums.size(); j++)
            {
                if (abs(nums[j] - min) <= limit && abs(nums[j] - max) <= limit)
                {
                    if (min > nums[j])
                        min = nums[j];
                    if (max < nums[j])
                        max = nums[j];
                    if (nums[j] == nums[i])
                        i = j;
                }
                else
                    break;
            }
            if (j - copy > maxlen) {
                cout << j << ' ' << i << endl;
                maxlen = j - copy;
            }
            //i=j-1;
        }
        return maxlen;
    }
};