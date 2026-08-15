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
        preidx--;
        root->right=build(pre,in,preidx,index+1,r);
        root->left=build(pre,in,preidx,l,index-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        int preidx=in.size()-1;
        return build(post,in,preidx,0,in.size()-1);
    }
};