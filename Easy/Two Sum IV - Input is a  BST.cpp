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
    bool findTarget(TreeNode* root, int k) {
        vector<int> order;
        inorder(root,order);
        for (int i = 0,j = order.size()-1;i<j;) {
            if (order[i]+order[j]==k)return true;
            order[i]+order[j] > k?j--:i++;
        }
        return false;
    }
    void inorder(TreeNode* p,vector<int> &order)
    {
        if (!p)return;
        inorder(p->left,order);
        order.push_back(p->val);
        inorder(p->right,order);
    }
};
