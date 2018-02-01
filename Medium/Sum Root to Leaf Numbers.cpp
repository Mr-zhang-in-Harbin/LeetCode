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
    int Sum;
    int sumNumbers(TreeNode* root) {
        if (!root)
            return 0;
        Sum = 0;
        LevelSum(root,0);
        return Sum;
    }
    
    void LevelSum(TreeNode* root,int Now) {
        Now = Now * 10 + root->val;
        if (root->left)
            LevelSum(root->left,Now);
        if (root->right)
            LevelSum(root->right,Now);
        if (!root->left && !root->right) {
           Sum += Now;
            return;
        }
    }
};