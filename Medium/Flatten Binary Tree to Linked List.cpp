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
    void flatten(TreeNode* root) {
        if (!root)
            return;
        if (root->right)
            Temp.push_back(root->right);
        if (root->left)
            Temp.push_back(root->left);
        OnPath(root);
        return;
    }
    
    void OnPath(TreeNode* root) {
        TreeNode *Now = root;
        while (!Temp.empty()) {
            TreeNode *p = Temp[Temp.size() - 1];
            Temp.pop_back();
            if (p->right) {
                Temp.push_back(p->right);
                if(p->left)
                    Temp.push_back(p->left);
            }
            else if (p->left)
                Temp.push_back(p->left);
            Now->right = p;
            Now->left = NULL;
            Now = Now->right;
        }
        return;
    }
};