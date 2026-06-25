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
    vector<vector<int>> ans;
    vector<tuple<int,int,int>> c;
    void fn(TreeNode*root,int i,int j){
        if(!root) return;
        c.push_back({i,j,root->val});
        if(root->left) fn(root->left,i-1,j+1);
        if(root->right) fn(root->right,i+1,j+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(!root) return ans;
        fn(root,0,0);
        sort(c.begin(), c.end());
        vector<int> temp;
        temp.push_back(get<2>(c[0]));
        for(int i=1;i<c.size();i++){
            if(get<0>(c[i-1])==get<0>(c[i])) temp.push_back(get<2>(c[i]));
            else{
                ans.push_back(temp);
                temp.clear();
                temp.push_back(get<2>(c[i]));
            }
        }ans.push_back(temp);
        return ans;
    }
};