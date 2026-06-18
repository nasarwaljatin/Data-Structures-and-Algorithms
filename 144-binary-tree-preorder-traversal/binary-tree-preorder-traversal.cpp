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
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root) return ans;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            int size=st.size();
            for(int i=0;i<size;i++){
                TreeNode* temp=st.top();st.pop();
                if(temp->right) st.push(temp->right);
                if(temp->left) st.push(temp->left);
                ans.push_back(temp->val);
            }
        }return ans;
    }
};