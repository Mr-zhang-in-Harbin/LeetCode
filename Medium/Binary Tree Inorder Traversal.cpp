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
    vector<int> Res;
    vector<int> inorderTraversal(TreeNode* root) {
        if (!root)
            return Res;
        else {
            inorderTraversal(root->left);
            Res.push_back(root->val);
            inorderTraversal(root->right);
            return Res;
        }
    }
};