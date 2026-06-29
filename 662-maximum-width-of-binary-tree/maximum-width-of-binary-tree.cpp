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
        q.push({root,0});
        while(!q.empty()){
            long long n=q.size(),a=0,b=0,mini=q.front().second;
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front().first;
                long long k=q.front().second-mini;q.pop();
                if(i==0) a=k;if(i==n-1) b=k;
                if(temp->left) q.push({temp->left,2 * k + 1});
                if(temp->right) q.push({temp->right,2 * k + 2});
            }maxi= max(b-a+1, maxi);
        }return maxi;
    }
};