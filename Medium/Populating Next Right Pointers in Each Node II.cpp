/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<TreeLinkNode*> Temp;
    void connect(TreeLinkNode *root) {
        if (!root)
            return;
        LevelConnect(root,0);
        return;
    }
    void LevelConnect(TreeLinkNode *root,int level) {
        if (level == Temp.size()) {
            root->next = NULL;
            Temp.push_back(root);
        }
        else {
            root->next = Temp[level];
            Temp[level] = root;
        }
        if (root->right) {
            LevelConnect(root->right,level + 1);
        }
        if (root->left) {
            LevelConnect(root->left,level + 1);
        }
        return;
    }
};