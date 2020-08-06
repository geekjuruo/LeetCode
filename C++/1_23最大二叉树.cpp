/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 * 
 * 
 
 递归

找到数组最大值,并且所在的位置

一直递归下去!


 */
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return maxtree(nums,0,nums.size()-1);
    }
    TreeNode *maxtree(const vector<int>nums,int left,int right)
    {
        if(left>right)
            return NULL;
        int max=nums[left];//每次从num传入的left开始
        int index=left;//index标记最大数的位置
        for(int i=left;i<=right;i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];//max为最大数
                index=i;//max的下标
            }
        }
        TreeNode *root=new TreeNode(max);
        root->left=maxtree(nums,left,index-1);//递归返回max的左边数组
        root->right=maxtree(nums,index+1,right);//递归返回max右边的数组
        return root;
    }
};

