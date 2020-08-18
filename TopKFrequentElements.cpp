//https://leetcode.com/problems/top-k-frequent-elements/submissions/
#include<unordered_map>
#include<vector>
#include<queue>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        unordered_map<int, int> aa;
        vector<int> bb;
        for (int i = 0; i < nums.size(); i++)
        {
            aa[nums[i]]++;
            if (aa[nums[i]] == 1)
                bb.push_back(nums[i]);
        }
        priority_queue<pair<int, int>> cc;
        for (int i = 0; i < bb.size(); i++)
        {
            cc.push(make_pair(aa[bb[i]], bb[i]));
        }
        bb.clear();
        for (int i = 0; i < k; i++)
        {
            bb.push_back(cc.top().second);
            cc.pop();
        }
        return bb;
    }
};