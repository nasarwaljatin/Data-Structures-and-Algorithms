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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        map<int,int> mpp;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front().first;
                int k=q.front().second;
                q.pop();
                if(temp->left) q.push({temp->left,k+1});
                if(temp->right) q.push({temp->right,k+1});
                mpp[k]=temp->val;
            }
        }for(auto it:mpp) if(it.first>=0) ans.push_back(it.second);
        return ans;
    }
};