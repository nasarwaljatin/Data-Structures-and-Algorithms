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
    TreeNode* temp;
    void fn(TreeNode* root, int val){
        if(!root) return;
        if(root->val==val){temp=root;return;}
        if(root->left && val<root->val) fn(root->left,val);
        if(root->right && val>root->val) fn(root->right,val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return temp;
        fn(root,val);
        return temp;
    }
};