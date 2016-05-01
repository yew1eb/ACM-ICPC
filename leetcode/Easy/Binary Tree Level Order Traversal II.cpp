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
    vector<vector<int> > res;
    void dfs(TreeNode *node, int dep) {
        if(node == NULL) return ;
        if(dep==res.size()){
            vector<int> vt;
            res.push_back(vt);
        }
        res[dep].push_back(node->val);
        dfs(node->left, dep+1);
        dfs(node->right, dep+1);
    }
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        dfs(root, 0);
        reverse(res.begin(), res.end());
        return res;
    }
};