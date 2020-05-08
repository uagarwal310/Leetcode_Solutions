//https://leetcode.com/problems/number-of-matching-subsequences/submissions/
class Solution {
public:

    int numMatchingSubseq(string S, vector<string>& words) {
        int cnt = 0;
        vector<vector<int> >mp(26);
        for (int i = 0; i < S.size(); i++)
        {
            mp[S[i] - 97].push_back(i);
        }
        for (int i = 0; i < words.size(); i++)
        {
            if (is(words[i], mp))
                cnt++;
            cout << endl;
        }
        return cnt;

    }

    bool is(string &t, vector<vector<int>> & mp)
    {
        int k = -1;
        for (int i = 0; i < t.length(); i++)
        {
            int index = t[i] - 97;
            int temp = upper_bound(mp[index].begin(), mp[index].end(), k) - mp[index].begin();
            // cout<<temp<<" ";
            if (temp == mp[index].size())
                return false;
            else
                k = mp[index][temp];
        }
        return true;
    }
};