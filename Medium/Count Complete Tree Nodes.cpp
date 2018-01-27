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
    int countNodes(TreeNode* root) {
        if (!root)
            return 0;
        int rh = 1, lh = 1;
        TreeNode *l = root->left, *r = root->right;
        while (l) {
            lh++;
            l = l->left;
        }
        while (r) {
            rh++;
            r = r->right;
        }
        if (lh == rh) return pow(2,lh) - 1;
        else return 1 + countNodes(root->left) + countNodes(root->right);
    }
};