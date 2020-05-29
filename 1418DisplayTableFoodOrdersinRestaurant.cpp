//https://leetcode.com/contest/weekly-contest-185/problems/display-table-of-food-orders-in-a-restaurant/
class Solution {
public:
	vector<vector<string>> displayTable(vector<vector<string>>& orders) {
		map<int, unordered_map<string, int>> mp;
		set<string> dishes;

		for (auto v : orders)
		{
			mp[stoi(v[1])][v[2]]++;
			dishes.insert(v[2]);
		}

		unordered_map<string, int> dish_idx;

		vector<vector<string>> res(1 + mp.size(), vector<string>(1 + dishes.size(), "0"));
		res[0][0] = "Table";

		int index = 1;
		for (auto s : dishes)
		{
			res[0][index] = s;
			dish_idx[s] = index;
			index++;
		}

		int idx = 1;
		for (auto it = mp.begin(); it != mp.end(); it++)
		{
			res[idx][0] = to_string(it->first);

			for (auto it2 = it->second.begin(); it2 != it->second.end(); it2++)
			{
				int index = dish_idx[it2->first];
				res[idx][index] = (to_string(it2->second));
			}
			idx++;
		}

		return res;
	}
};