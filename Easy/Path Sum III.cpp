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
    int pathSum(TreeNode* root, int sum) {
        if (!root)
            return 0;
        return Sum(root,0,sum)+pathSum(root->left,sum)+pathSum(root->right,sum);
    }
    int Sum(TreeNode* root,int pre,int sum) {
        if (!root)
            return 0;
        int cur = root->val + pre;
        return (sum==cur)+Sum(root->left,cur,sum)+Sum(root->right,cur,sum);
    }
};