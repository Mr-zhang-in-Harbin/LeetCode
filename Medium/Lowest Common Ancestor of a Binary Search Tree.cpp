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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (p->val > q->val) {
            TreeNode* a = p;
            p = q;
            q = a;
        }
        TreeNode* a = root;
        while (true) {
            if (a->val == p->val || a->val == q->val)
                return a;
            else if (!a->left || !a->right)
                a = a->left?a->left:a->right;
            else if (p->val < a->val && a->val < q->val)
                return a;
            else {
                a = a->val < p->val?a->right:a->left;
            }
        }
    }
    
    
};