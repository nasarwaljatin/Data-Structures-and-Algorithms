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
    TreeNode* fn(TreeNode*root, int n){
        if(!root) return NULL;
        if(root->val==n) return root;
        TreeNode* left = fn(root->left, n);
        if (left) return left;
        return fn(root->right, n);
    }
    int amountOfTime(TreeNode* root, int start) {
        int c=0;
        unordered_map<TreeNode*,TreeNode*> parent;
        queue<TreeNode*> q;
        q.push(root);while(!q.empty()){
            TreeNode* temp=q.front();q.pop();
            if(temp->left){
                parent[temp->left]=temp;
                q.push(temp->left);
            }if(temp->right){
                parent[temp->right]=temp;
                q.push(temp->right);
            }
        }unordered_set<TreeNode*> st;
        queue<TreeNode*> qt;
        TreeNode* star=fn(root,start);
        if(!star) return 0;
        qt.push(star);
        st.insert(star);
        while(!qt.empty()){
            int n=qt.size();
            while(n--){
                TreeNode* temp=qt.front();qt.pop();
                if(temp->left && st.find(temp->left)==st.end()){
                    st.insert(temp->left);
                    qt.push(temp->left);
                }if(temp->right && st.find(temp->right)==st.end()){
                    st.insert(temp->right);
                    qt.push(temp->right);
                }if(parent[temp] && st.find(parent[temp])==st.end()){
                    st.insert(parent[temp]);
                    qt.push(parent[temp]);
                }
            }c++;
        }return c-1;
    }
};