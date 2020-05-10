//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/
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