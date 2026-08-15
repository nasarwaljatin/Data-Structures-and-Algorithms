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
    TreeNode* build(vector<int>& pre, vector<int>& in,int &preidx,int l,int r){
        int index;
        if(l>r) return NULL;
        TreeNode* root=new TreeNode(pre[preidx]);
        for(int i=l;i<=r;i++) if(pre[preidx]==in[i]) index=i;
        preidx++;
        root->left=build(pre,in,preidx,l,index-1);
        root->right=build(pre,in,preidx,index+1,r);
        return root;

    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int preidx=0;
        return build(pre,in,preidx,0,in.size()-1);
    }
};