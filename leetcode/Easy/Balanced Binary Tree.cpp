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
    bool balanced;
    int check(TreeNode *node) {
        if(!balanced) return -1;
        if(node == NULL) return 0;
        int lh = check(node->left) + 1;
        int rh = check(node->right) + 1;
        if(abs(lh-rh)>1){
            balanced = false;
        }
        return lh>rh?lh:rh;
    }
    bool isBalanced(TreeNode *root) {
        balanced = true;
        check(root);
        return balanced;
    }
};