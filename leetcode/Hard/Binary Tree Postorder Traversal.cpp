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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ret;
        postorder(ret, root);
        return ret;
    }
    
private:
    void postorder(vector<int> & ret, TreeNode* root) {
        if(root != NULL) {
            postorder(ret, root->left);
            postorder(ret, root->right);
            ret.push_back(root->val);
        }
    }
};
