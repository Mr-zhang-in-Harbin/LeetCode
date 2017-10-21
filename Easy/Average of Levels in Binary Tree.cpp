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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        vector<int> count;
        dfs(root,res,count,0);
        for (int i = 0;i < res.size();i++)
            res[i]/=count[i];
        return res;
    }
    void dfs(TreeNode* root,vector<double> &res,vector<int> &count,int depth) {
        if (!root)
            return;
        if (depth>=res.size()) {
            res.push_back(root->val);
            count.push_back(1);
        }
        else {
            res[depth]+=root->val;
            count[depth]++;
        }
        dfs(root->left,res,count,depth+1);
        dfs(root->right,res,count,depth+1);
    }
};