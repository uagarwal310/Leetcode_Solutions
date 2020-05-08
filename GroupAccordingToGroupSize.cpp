#include<vector>
#include<map>
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) 
    {
        map<int ,vector<int>> a;
        vector<vector<int>> ans;
        vector<int> blank;
        int j=0;
        for(auto i=groupSizes.begin();i!=groupSizes.end();i++,j++)
        {
            a[*i].push_back(j);
            if(a[*i].size()==*i)
            {
                ans.push_back(a[*i]);
                a[*i]=blank;
            }
        }
        return ans;
    }
};