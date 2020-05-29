//https://leetcode.com/contest/weekly-contest-184/problems/queries-on-a-permutation-with-key/
class Solution {
public:

    vector<int> processQueries(vector<int>& queries, int m) {
        map<int, int>hash;
        for (int i = 0; i < queries.size(); i++)
        {
            if (hash.find(queries[i]) != hash.end())
                continue;
            else
                hash[queries[i]] = queries[i] - 1;
        }
        vector<int>ans; int temp;
        for (int i = 0; i < queries.size(); i++)
        {
            temp = hash[queries[i]];
            for (auto & i : hash)
            {
                if (i.second < temp)
                    i.second = i.second + 1;
            }
            ans.push_back(temp);
            hash[queries[i]] = 0;


        }



        return ans;
    }
};