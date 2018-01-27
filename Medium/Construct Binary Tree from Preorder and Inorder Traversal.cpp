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
    TreeNode *Res;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return Build(preorder,0,preorder.size(),inorder,0,inorder.size());
    }
    TreeNode* Build(vector<int>& preorder,int i,int j,vector<int>& inorder,int ii,int jj) {
         if(i >= j || ii >= j)
            return NULL;

        int mid = preorder[i];
        auto f = find(inorder.begin() + ii,inorder.begin() + jj,mid);

        int dis = f - inorder.begin() - ii;

        TreeNode* root = new TreeNode(mid);
        root -> left = Build(preorder,i + 1,i + 1 + dis,inorder,ii,ii + dis);
        root -> right = Build(preorder,i + 1 + dis,j,inorder,ii + dis + 1,jj);
        return root;
    }
};