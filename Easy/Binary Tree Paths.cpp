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
    vector<string> binaryTreePaths(TreeNode* root) {        
        vector<string> res;
        if (!root)
            return res;
        BST(root,"",res);
        return res;
    }
    void BST(TreeNode* root,string Now,vector<string>& res) {
        if (root->left)
            BST(root->left,Now + to_string(root->val) + "->",res);
        if (root->right)
            BST(root->right,Now + to_string(root->val) + "->",res);
        if (!root->left && !root->right) {
            Now += to_string(root->val);
            res.push_back(Now);
        }
    }
};