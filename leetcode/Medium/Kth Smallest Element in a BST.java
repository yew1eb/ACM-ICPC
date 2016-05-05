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
    public int kthSmallest(TreeNode root, int k) {
        int leftNodeCount = nodeCount(root.left);
        if(leftNodeCount + 1 == k) {
            return root.val;
        }
        if(leftNodeCount >= k) {
            return kthSmallest(root.left, k);
        } else {
            return kthSmallest(root.right, k - leftNodeCount - 1);
        }
    }

    private int nodeCount(TreeNode root) {
        if(root==null) {
            return 0;
        }
        return nodeCount(root.left) + nodeCount(root.right) + 1;
    }
}