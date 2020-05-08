//https://leetcode.com/problems/merge-two-binary-trees/
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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) 
    {
    	TreeNode *ans=new TreeNode;
        if(t1!=NULL && t2!=NULL)
        {
            ans->val=t1->val+t2->val;
            ans->left=mergeTrees(t1->left, t2->left);
            ans->right=mergeTrees(t1->right, t2->right);
            return ans;
        }
        if(t1==NULL)
        	return t2;
        return t1;
    }
};