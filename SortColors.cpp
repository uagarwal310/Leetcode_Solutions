//https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3357/
class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        vector<int> cc(3, 0);
        for (int i = 0; i < nums.size(); i++)
        {
            cc[nums[i]]++;
        }
        int i = 0;
        while (cc[0]--)
            nums[i++] = 0;
        while (cc[1]--)
            nums[i++] = 1;
        while (cc[2]--)
            nums[i++] = 2;
    }
};