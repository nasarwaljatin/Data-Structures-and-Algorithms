/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int fn(TreeNode* node,int n){
        if(!node) return 0;
        int l=fn(node->left,n+1);
        int r=fn(node->right,n+1);
        return max(l,r)+1;
    }
    int maxDepth(TreeNode* root ) {
        if(!root) return 0;
        return fn(root,0);
    }
};