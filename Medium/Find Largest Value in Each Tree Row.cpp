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
    vector<int> largestValues(TreeNode* root) {
        LevelLarge(root,0);
        return Res;
    }
    
    void LevelLarge(TreeNode* root,int level) {
        if (!root)
            return;
        if (Res.size() == level)
            Res.push_back(root->val);
        else if (Res[level] < root->val)
            Res[level] = root->val;
        LevelLarge(root->left,level + 1);
        LevelLarge(root->right,level + 1);
        return;
    }
};