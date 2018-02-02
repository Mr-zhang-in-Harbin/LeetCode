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
    vector<TreeNode*> Temp;
    int kthSmallest(TreeNode* root, int k) {
        PushIn(root);
        while (--k) {
            TreeNode *p = Temp[Temp.size() - 1];
            Temp.pop_back();
            PushIn(p->right);
        }
        TreeNode *p = Temp[Temp.size() - 1];
        return p->val;
    }
    
    void PushIn(TreeNode* root) {
        TreeNode *p = root;
        while (p) {
            Temp.push_back(p);
            p = p->left;
        }
        return;
    }
};