//给定一个二叉树，在树的最后一行找到最左边的值。
//二叉树的层次遍历
//https://blog.csdn.net/hansionz/article/details/81947834
class Solution {
    vector<int> result;
public:
    int findBottomLeftValue(TreeNode* root) {
        if (!root) assert(root);
        queue<TreeNode *> q {{ root }};
        while (!q.empty()) {
            result.clear();
            int size = q.size();
            for (int i = 0; i < size; i ++) {
                TreeNode *top = q.front();
                result.push_back(top->val);
                q.pop();
                if (top->left) q.push(top->left);
                if (top->right) q.push(top->right);
            }
        }
        return result[0];
    }
};