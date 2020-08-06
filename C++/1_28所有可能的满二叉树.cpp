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
    vector<TreeNode*> allPossibleFBT(int N) {
        vector<vector<TreeNode*>> dp(N+1);
        dp[1].push_back({new TreeNode(0)});

        for(int i = 3; i <= N; i+=2)
            for(int l = 1; l <= i - 2; l+=2){
                int r = i - 1 - l;

                for(auto& ltree: dp[l]){
                    for(auto& rtree: dp[r]){
                        TreeNode* root = new TreeNode(0);
                        root->left = ltree;
                        root->right = rtree;
                        dp[i].push_back(root);
                    }

                }
            }
        return dp[N];
    }
};