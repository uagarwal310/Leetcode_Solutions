/*
0 1 4 9 16 25 36
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
	bool isPerfectSquare(int num)
	{
		int x = 1;
		while (num > 0)
		{
			num -= x;
			x += 2;
		}
		return (num == 0);
	}
};