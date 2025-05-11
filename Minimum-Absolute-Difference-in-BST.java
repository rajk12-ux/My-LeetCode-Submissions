/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
//import java.util.ArrayList;
//import java.util.List;

public class Solution {
    private void inorder(TreeNode node, List<Integer> route) {
        if (node == null) {
            return;
        }
        inorder(node.left, route);
        route.add(node.val);
        inorder(node.right, route);
    }

    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> ans = new ArrayList<>();
        inorder(root, ans);
        return ans;
    }

    public int getMinimumDifference(TreeNode root) {
        List<Integer> path = inorderTraversal(root);
        // Initialize the minimum difference with the difference of the first two elements.
        int minn = path.get(1) - path.get(0);
        for (int i = 2; i < path.size(); i++) {
            minn = Math.min(minn, path.get(i) - path.get(i - 1));
        }
        return minn;
    }
}