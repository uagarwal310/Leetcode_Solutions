https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/
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
	int singleNonDuplicate(vector<int>& nums)
	{
		int start = 0, end = nums.size() - 1, mid;
		while (start < end)
		{
			mid = (start + end) / 2;
			if (mid % 2 == 0)
			{
				if (nums[mid] == nums[mid + 1])
					start = mid + 2;
				else if (nums[mid] == nums[mid - 1])
					end = mid - 2;
				else
					return nums[mid];
			}
			else
			{
				if (nums[mid] == nums[mid + 1])
					end = mid - 1;
				else if (nums[mid] == nums[mid - 1])
					start = mid + 1;
				else
					return nums[mid];
			}
		}
		return nums[(start + end) / 2];
	}
};
//3,3,7,7,10,11,11
//3 7 7 10 10 11 11
//1,1,2,3,3,4,4,8,8
//1 1 2 2 3 3 4 8 8