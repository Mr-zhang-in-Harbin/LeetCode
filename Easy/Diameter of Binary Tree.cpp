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
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root)
            return 0;        
        int left = GetDepth(root->left);
        int right = GetDepth(root->right);
        return max(left+right,left>right?diameterOfBinaryTree(root->left):diameterOfBinaryTree(root->right));
    }
    int GetDepth(TreeNode *root) {
        if (!root)
            return 0;
        return max(GetDepth(root->left),GetDepth(root->right)) + 1;
    }
};