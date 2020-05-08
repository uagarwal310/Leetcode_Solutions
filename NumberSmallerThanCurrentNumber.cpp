https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
#include<vector>
class NumbersSmallerThanCurrentNumber 
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        auto begin=nums.begin();
        int a=nums.size();
        vector <int> ans;
        for(int i=0;i<a;i++)
        {
            int s=0;
            for(int j=0;j<a;j++)
            {
                if(begin[j]<begin[i])
                    s++;
            }
            ans.push_back(s);
        }
        return ans;
    }
};