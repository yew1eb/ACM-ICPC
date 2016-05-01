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
    bool dfs(TreeNode *node, int sum) {
        if(node == NULL) return false;
        if(node->left == NULL && node->right == NULL) return sum==node->val;
        return dfs(node->left, sum - node->val) || dfs(node->right, sum - node->val);
    }
    bool hasPathSum(TreeNode *root, int sum) {
        return dfs(root, sum);
    }
};