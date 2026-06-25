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
    vector<vector<int>> c;
    void fn(TreeNode*root,int i,int j){
        if(!root) return;
        c.push_back({root->val,i,j});
        if(root->left) fn(root->left,i-1,j+1);
        if(root->right) fn(root->right,i+1,j+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(!root) return ans;
        fn(root,0,0);
        sort(c.begin(), c.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a[1] != b[1]) return a[1] < b[1]; // column
        if (a[2] != b[2]) return a[2] < b[2]; // row
        return a[0] < b[0];});
        vector<int> temp;
        temp.push_back(c[0][0]);
        for(int i=1;i<c.size();i++){
            if(c[i-1][1]==c[i][1]) temp.push_back(c[i][0]);
            else{
                ans.push_back(temp);
                temp.clear();
                temp.push_back(c[i][0]);
            }
        }ans.push_back(temp);
        return ans;
    }
};