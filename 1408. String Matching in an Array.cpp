//https://leetcode.com/contest/weekly-contest-184/problems/string-matching-in-an-array/
class Solution {
public:
	vector<string> stringMatching(vector<string>& words)
	{
		vector<string> ans, aa;
		unordered_map<int, vector<string>> len;
		for (int i = 0; i < words.size(); i++)
			len[words[i].size()].push_back(words[i]);
		for (int i = 30; i > 0; i--)
		{
			if (ans.size() > 0)
				ans.insert(ans.end(), len[i].begin(), len[i].end());
			else
				ans = len[i];
		}
		for (int i = 1; i < ans.size(); i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (ans[j].find(ans[i]) != -1)
				{
					aa.push_back(ans[i]);
					cout << ans[j] << endl;
					break;
				}
			}
		}
		return aa;
	}
};