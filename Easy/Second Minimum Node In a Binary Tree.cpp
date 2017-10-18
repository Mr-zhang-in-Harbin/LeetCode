/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
    static int Min = INT_MAX;
    static int SMin = INT_MAX;
class Solution {
public:
    void FindMin(TreeNode* root,int &Min,int &SMin)
    {
        if (!root)
            return;
        if (root->val < Min)
        {
             SMin = Min;
            Min = root->val;
        }
        if (root->val < SMin && root->val > Min)
            SMin = root->val;
        FindMin(root->left,Min,SMin);
        FindMin(root->right,Min,SMin);
    }
    int findSecondMinimumValue(TreeNode* root) {
        int Min = INT_MAX,SMin = INT_MAX;
        FindMin(root,Min,SMin);
        return SMin == INT_MAX?-1:SMin;
    }
};