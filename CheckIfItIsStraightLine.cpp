/*
y-y1=m(x-x1)
m=(y1-y2)/(x1-x2)
*/
#include<bits/stdc++.h>
class Solution
{
public:
	Solution()
	{
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);
	}
	bool checkStraightLine(vector<vector<int>>& cc)
	{
		if (cc[0][0] != cc[1][0])
		{
			double m = (cc[0][1] - cc[1][1]) / (cc[0][0] - cc[1][0]);
			int y1 = cc[0][1];
			int x1 = cc[0][0];
			for (int i = 2; i < cc.size(); i++)
			{
				int x = cc[i][0];
				int y = cc[i][1];
				if (y - y1 != m * (x - x1))
					return false;
			}
			return true;
		}
		for (int i = 2; i < cc.size(); i++)
		{
			if (cc[i][0] != cc[0][0])
				return false;
		}
		return true;
	}
};