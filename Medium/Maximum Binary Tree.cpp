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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* root = Creat(nums,0,nums.size());
        return root;
    }
    
    TreeNode* Creat(vector<int>& nums,int start,int end) {
        if (start == end)
            return NULL;
        int max = start;
        for (int i = 1;i + start < end;i++)
            if (nums[start + i] > nums[max])
                max = start + i;
        TreeNode* p = new TreeNode(nums[max]);
        p->left = Creat(nums,start,max);
        p->right = Creat(nums,max + 1,end);
        return p;
    }
};