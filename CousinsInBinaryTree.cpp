//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3322/
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
	int depth(TreeNode* root, int x, int level)
	{
		if (root == NULL)
			return 0;
		if (root->val == x)
			return level;
		int left = depth(root->left, x, level + );
		if (left > 1)
			return left;
		int right = depth(root->right, x, level + );
		if (right > 1)
			return right;
		return -1;
	}
	bool isSibling(TreeNode* root, int x, int y)
	{
		if (root == NULL)
			return false;
		if (root->val == x || root->val == y)
			return false;
		if (root->left == NULL && root->right == NULL)
		{
			if (root->left->val == x && root->right->val == y)
				return true;
			if (root->left->val == y && root->right->val == x)
				return true;
		}
		return isSibling(root->left, x, y) || isSibling(root->right, x, y);
	}
	bool isCousins(TreeNode* root, int x, int y)
	{
		return ((depth(root, x, 0) == depth(root, y, 0)) && !isSibling(root, x, y));
	}
};