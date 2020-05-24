//https://leetcode.com/contest/weekly-contest-190/problems/pseudo-palindromic-paths-in-a-binary-tree/
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
    int checks(TreeNode* root, vector<int> check)
    {
        if (root == NULL)
            return 0;
        if (root->left == NULL && root->right == NULL)
        {
            check[root->val]++;
            int count = 0;
            for (int i = 1; i < 10; i++)
            {
                if (check[i] % 2 == 1)
                {
                    count++;
                    if (count > 1)
                        return 0;
                }
            }
            return 1;
        }
        check[root->val]++;
        vector<int> left = check, right = check;;
        return checks(root->right, right) + checks(root->left, left);
    }
    int pseudoPalindromicPaths (TreeNode* root)
    {
        if (root == NULL)
            return 0;
        vector<int> check;
        for (int i = 0; i < 10; i++)
            check.push_back(0);
        return checks(root, check);
    }
};