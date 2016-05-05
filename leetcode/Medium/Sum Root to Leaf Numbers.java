/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    int sum = 0;
    public int sumNumbers(TreeNode root) {
        if(root != null) {
            findNum(root,root.val);
        }
        return sum;
    }
    private void findNum(TreeNode root, int num) {
        if(root.left==null && root.right == null) {
            sum += num;
            return ;
        }
        if(root.left != null) {
            findNum(root.left, num*10 + root.left.val);
        }
        if(root.right != null) {
            findNum(root.right, num*10 + root.right.val);
        }
    }
}