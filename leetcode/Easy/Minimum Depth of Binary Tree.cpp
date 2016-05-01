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
    int dfs(TreeNode *node) {
        if(node==NULL) return 0;
        int res = 1;
        if(node->left && node->right) {
            res += min(dfs(node->left), dfs(node->right));
        }else if(node->left) {
            res += dfs(node->left);
        }else if(node->right) {
            res += dfs(node->right);
        }
        return res;
    }
    int minDepth(TreeNode *root) {
        if(root == NULL) return 0;
        return dfs(root);
    }
};