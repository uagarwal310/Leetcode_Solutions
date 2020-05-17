//https://leetcode.com/problems/validate-binary-search-tree/submissions/
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
    Solution
    {
        ios_base::sync_with_stdio(0);
    }
    bool check(TreeNode* node, long low, long high)
    {
        if (!node) return true;
        return low < node->val && node->val < high && check(node->left, low, node->val)
               && check(node->right, node->val, high);
    }
    bool isValidBST(TreeNode* root)
    {
        return check(root, LONG_MIN, LONG_MAX);
    }
};