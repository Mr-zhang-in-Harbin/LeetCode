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
    vector<int> nums;
    int getMinimumDifference(TreeNode* root) {
        To_num(root);
        int MIN = INT_MAX;
        for (int i = 0;i < nums.size() - 1;i++){
            MIN = min(MIN,nums[i + 1] - nums[i]);
        }
        return MIN;
    }
    
    void To_num(TreeNode* root) {
        if (!root)
            return;
        To_num(root->left);
        nums.push_back(root->val);
        To_num(root->right);
        return;
    }
};