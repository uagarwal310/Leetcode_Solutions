//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3339/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder)
    {
        if (preorder.size() == 0)
            return NULL;
        TreeNode* bst = new TreeNode();
        bst->val = preorder[0];
        vector<int> left, right;
        for (int i = 1; i < preorder.size(); i++)
        {
            if (preorder[i] < preorder[0])
                left.push_back(preorder[i]);
            else
                right.push_back(preorder[i]);
        }
        bst->left = bstFromPreorder(left);
        bst->right = bstFromPreorder(right);
        return bst;
    }
};