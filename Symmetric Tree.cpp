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
    bool isSame(TreeNode *a, TreeNode *b){
        if (a == NULL || b == NULL)
            return a==b;
        if (a->val != b->val)
            return false;
        if (isSame(a->left, b->right) == false || isSame(a->right,b->left) == false)
            return false;
        else return true;
    }
    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;
        return isSame(root->left, root->right);
    }
};