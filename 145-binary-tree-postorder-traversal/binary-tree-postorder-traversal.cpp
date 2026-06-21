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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        stack<TreeNode*> st1;
        st1.push(root);
        while(!st1.empty()){
            int n=st1.size();
            for(int i=0;i<n;i++){
                TreeNode* temp=st1.top();
                st1.pop();
                if(temp->left) st1.push(temp->left);
                if(temp->right) st1.push(temp->right);
                ans.push_back(temp->val);
            }
        }reverse(ans.begin(),ans.end());
        return ans;
    }
};