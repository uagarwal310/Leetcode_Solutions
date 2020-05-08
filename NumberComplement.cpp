//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3319/
//https://leetcode.com/problems/complement-of-base-10-integer/submissions/
#include<bits/stdc++.h>
class Solution
{
public:
	int findComplement(int num)
	{
		if (num == 0)
			return 1;
		int lg = (int)log2(num) + 1;
		lg = pow(2, lg) - 1;
		return lg - num;
	}
};