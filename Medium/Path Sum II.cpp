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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if (!root)
            return Res;
        vector<int> Temp;
        EachPath(root,sum,&Temp);
        return Res;
    }
    void EachPath(TreeNode* root,int Now,vector<int>* Temp) {
        if (!root)
            return;
        else if (root->val == Now && !root->left && !root->right) {
            vector<int> Part = *Temp;
            Part.push_back(root->val);
            Res.push_back(Part);
            return;
        }
        else {
            Temp->push_back(root->val);
            EachPath(root->left,Now - root->val,Temp);
            EachPath(root->right,Now - root->val,Temp);
            Temp->pop_back();
            return;
        }
    }
};