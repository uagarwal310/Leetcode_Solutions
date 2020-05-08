//https://leetcode.com/contest/biweekly-contest-25/problems/max-difference-you-can-get-from-changing-an-integer/
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
	int maxDiff(int num)
	{
		string s = to_string(num), f, ss;
		char x, y;
		int flag = 0;
		if (s[0] != '1')
		{
			y = '1';
			x = s[0];
			flag = 1;
		}
		else
		{
			for (int i = 1; i < s.size(); i++)
			{
				if (s[i] != '0' && s[i] != '1')
				{
					x = s[i];
					y = '0';
					flag = 1;
					break;
				}
			}
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == x && flag)
				f += y;
			else
				f += s[i];
		}
		flag = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != '9')
			{
				x = s[i];
				y = '9';
				flag = 1;
				break;
			}
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == x && flag)
				ss += y;
			else
				ss += s[i];
		}
		int fn = stoi(f), sn = stoi(ss);
		cout << fn << ' ' << sn;
		return sn - fn;
	}
};