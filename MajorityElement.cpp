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
	int majorityElement(vector<int>& nums)
	{
		int votes = 1;
		int num = nums[0];
		for (int i = 1; i < nums.size(); i++)
		{
			if (votes == 0)
			{
				num = nums[i];
				votes = 1;
			}
			else if (nums[i] != num)
				votes--;
			else
				votes++;
		}
		return num;
	}
};


/*
1 1 3 1 4
5
3

1 1 1 1 5 6
6
4

*/