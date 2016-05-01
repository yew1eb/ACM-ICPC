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
    int dfs(TreeNode *cur){
        if(cur==NULL) return 0;
        int res = 1;
        if(cur->left!=NULL) res = dfs(cur->left) + 1;
        if(cur->right!=NULL) res = max(res, dfs(cur->right)+1);
        return res;
    }
    int maxDepth(TreeNode *root) {
        return dfs(root);
    }
};