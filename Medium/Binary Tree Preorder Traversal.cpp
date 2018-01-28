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
    vector<int> preorderTraversal(TreeNode* root) {
        if (!root)
            return Res;
        else {
            Res.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
            return Res;
        }
    }
};