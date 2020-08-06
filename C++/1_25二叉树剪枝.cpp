/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//递归即可
class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(root == NULL) {
            return NULL;
        }
        if(root->left == NULL && root->right == NULL) {
            if(root->val == 0) {
                return NULL;
            } else {
                return root;
            }
        }
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        return root->left == NULL && root->right == NULL && root->val == 0 ? NULL:root;
    }
};