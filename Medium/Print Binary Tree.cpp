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
    vector<vector<string>> Res;
    vector<vector<string>> printTree(TreeNode* root) {
        int Depth = GetDepth(root);
        vector<string> Temple;
        for (int i = 1;i < pow(2,Depth);i++)
            Temple.push_back("");
        for (int i = 0;i < Depth;i++)
            Res.push_back(Temple);
        Level(root,0,Temple.size(),0);
        return Res;
    }
    
    void Level(TreeNode* root,int start,int end,int level) {
        if (!root)
            return;
        int midium = (start + end) / 2;
        string p = to_string(root->val);
        Res[level][midium] = p;
        Level(root->left,start,midium,level + 1);
        Level(root->right,midium,end,level + 1);
        return;
    } 
        
    int GetDepth(TreeNode* root) {
        if (!root)
            return 0;
        else return max(GetDepth(root->left),GetDepth(root->right)) + 1;
    }
};