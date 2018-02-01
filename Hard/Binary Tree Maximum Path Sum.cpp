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
    int MaxValue;
    int maxPathSum(TreeNode* root) {
        MaxValue = INT_MIN;
        downpath(root);
        return MaxValue;
    }
    
    int downpath(TreeNode* root) {
        if (!root)
            return 0;
        int left = max(0,downpath(root->left));
        int right = max(0,downpath(root->right));
        MaxValue = max(MaxValue,left + right + root->val);
        return max(left,right) + root->val;
    }
};