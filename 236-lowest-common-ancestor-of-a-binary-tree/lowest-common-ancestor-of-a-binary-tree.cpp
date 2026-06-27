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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* a, TreeNode* b) {
        if(!root||root==a||root==b) return root;
        TreeNode* left=lowestCommonAncestor(root->left,a,b);
        TreeNode* right=lowestCommonAncestor(root->right,a,b);
        if(!left) return right;
        else if(!right) return left;
        else return root;
    }
};