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
    unordered_map<int,int> count;
    int Max;
    vector<int> findFrequentTreeSum(TreeNode* root) {    
        Max = 0;
        
        JudgeTree(root);
        vector<int> maxSums;
        for(const auto& x :  count){
            if(x.second == Max) maxSums.push_back(x.first);
        }
        return maxSums;
    }
    
    
    int JudgeTree(TreeNode* root) {
        if (!root)
            return 0;
        root->val = root->val + JudgeTree(root->left) + JudgeTree(root->right);
        ++count[root->val];
        Max = max(Max,count[root->val]);
        return root->val;
    }
};