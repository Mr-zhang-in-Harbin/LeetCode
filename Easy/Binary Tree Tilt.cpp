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
    int findTilt(TreeNode* root) {
        if (!root)
            return 0;
        int left = sum(root->left);
        int right = sum(root->right);
        int res = abs(left - right);
        return res + findTilt(root->left) + findTilt(root->right);
    }
    int sum(TreeNode *root) {
        if (!root)
            return 0;
        else return root->val+sum(root->left)+sum(root->right);
    }
};
