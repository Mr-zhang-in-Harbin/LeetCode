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
    int widthOfBinaryTree(TreeNode* root) {
        vector<int> left;
        return dfs(root,1,0,left);
    }
    int dfs(TreeNode *root,int id,int depth,vector<int>& left) {
        if (!root)
            return 0;
        if (depth >= left.size()) 
            left.push_back(id);
        return max({id+1-left[depth],dfs(root->left,id*2,depth+1,left),dfs(root->right,id*2+1,depth+1,left)});
    }
};
