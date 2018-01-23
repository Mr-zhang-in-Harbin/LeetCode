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
    vector<vector<int>> Res;
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root)
            LevelOrder(root,0);
        return Res;
    }
    
    void LevelOrder(TreeNode* root,int Level) {
        if (Level == Res.size())
            Res.push_back(vector<int>());
        Res[Level].push_back(root->val);
        if (root->left)
            LevelOrder(root->left,Level + 1);
        if (root->right)
            LevelOrder(root->right,Level + 1);
        return;
    }
};
