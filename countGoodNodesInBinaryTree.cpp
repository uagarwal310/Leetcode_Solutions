//https://leetcode.com/contest/biweekly-contest-26/problems/count-good-nodes-in-binary-tree/
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
    int check(TreeNode* root, int maxval)
    {
        if (root == NULL)
            return 0;
        if (maxval > root->val)
        {
            maxval = (maxval > root->val) ? maxval : root->val;
            return check(root->left, maxval) + check(root->right, maxval);
        }
        else
        {
            maxval = (maxval > root->val) ? maxval : root->val;
            return 1 + check(root->left, maxval) + check(root->right, maxval);
        }
    }
    int goodNodes(TreeNode* root)
    {
        if (root == 0)
            return 0;
        return check(root, INT_MIN);
    }
};