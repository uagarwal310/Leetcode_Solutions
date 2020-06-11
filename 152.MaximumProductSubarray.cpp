//https://leetcode.com/problems/maximum-product-subarray/
#include<bits/stdc++.h>
class Solution {
public:
    int maxProduct(vector<int>& nums)
    {
        int maxo = nums[0], maximum = nums[0], mino = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            int temp = maxo;
            maxo = max(max(maxo * nums[i], mino * nums[i]), nums[i]);
            mino = min(min(temp * nums[i], mino * nums[i]), nums[i]);
            maximum = max(maximum, maxo);
        }
        return maximum;
    }
};