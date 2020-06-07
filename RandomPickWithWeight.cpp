//https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3351/
class Solution {
public:
	vector<int> s;
	Solution(vector<int>& w) {
		for (int i = 1; i < w.size(); i++)
		{
			w[i] += w[i - 1];
		}
		s = w;
	}

	int pickIndex()
	{
		for (int i = 0; i < 10; i++)
			cout << rand() << endl;
		return (upper_bound(s.begin(), s.end(), rand() % s[s.size() - 1]) - s.begin());
	}
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */