//https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/532/week-5/3315/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool pathCheck( TreeNode *root, vector<int> arr, int index)
    {
        if (root == NULL)
            return (index == arr.size());
        int n = arr.size();
        if (root->val != arr[index])
            return false;
        if (index == n - 1)
            return (root->left == NULL && root->right == NULL);
        if (pathCheck(root->left, arr, index + 1))
            return true;
        return pathCheck(root->right, arr, index + 1);
    }
    bool isValidSequence(TreeNode* root, vector<int>& arr)
    {
        return pathCheck(root, arr, 0);
    }
};