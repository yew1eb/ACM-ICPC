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
    bool Same(TreeNode *p, TreeNode *q){
        if(p==NULL && q==NULL){ 
            return true;
        }else if(p!=NULL && q!=NULL) {
            if(p->val != q->val) return false;
            return Same(p->left, q->left) && Same(p->right, q->right);
        }else{
            return false;
        }
    }
    bool isSameTree(TreeNode *p, TreeNode *q) {
        return Same(p, q);
    }
};