/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        if(root==NULL) return true;
        return dfs(root->left, root->right);
    }
    bool dfs(TreeNode *Left, TreeNode *Right) {
        if(!Left && !Right) return true;
        if(!Left || !Right) return false;
        return Left->val == Right->val && dfs(Left->left, Right->right) 
               && dfs(Left->right, Right->left);
    }
};