/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

//基于递归

class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> listInter = new ArrayList<Integer>();
        if (root == null) {
            return listInter;
        }
        if (root.left != null) {
            listInter.addAll(inorderTraversal(root.left));
        }
        listInter.add(root.val);
        if (root.right != null) {
            listInter.addAll(inorderTraversal(root.right));
        }
        return listInter;
    }
}