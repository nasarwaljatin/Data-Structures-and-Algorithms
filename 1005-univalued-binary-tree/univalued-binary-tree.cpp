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
    bool isUnival(TreeNode* root,int k){
        if (root == NULL) return true;
        else if(root->val!=k) return false; 
        else return isUnival(root->left,k) && isUnival(root->right,k);
    }
    bool isUnivalTree(TreeNode* root) {
        return isUnival(root,root->val);
    }
};