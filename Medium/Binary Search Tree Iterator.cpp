/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    vector<TreeNode*> Temp;
    BSTIterator(TreeNode *root) {
        PushIn(root);
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return Temp.size();
    }

    /** @return the next smallest number */
    int next() {
        TreeNode* n = Temp[Temp.size() - 1];
        Temp.pop_back();
        PushIn(n->right);
        return n->val;
    }
    
    void PushIn(TreeNode* root) {
        TreeNode *p = root;
        while (p) {
            Temp.push_back(p);
            p = p->left;
        }
        return;
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */