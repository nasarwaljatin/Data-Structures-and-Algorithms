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
    int widthOfBinaryTree(TreeNode* root) {
        long long maxi=0;
        queue<pair<TreeNode*,long long>> q;
        q.push({root,1});
        while(!q.empty()){
            long long n=q.size();
            vector<long long> ans;
            long long mini=q.front().second;
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front().first;
                long long k=q.front().second-mini;q.pop();
                if(temp->left) q.push({temp->left,2 * k });
                if(temp->right) q.push({temp->right,2 * k + 1});
                ans.push_back(k);
            }maxi = max(ans.back() - ans.front() + 1, maxi);
        }return maxi;
    }
};