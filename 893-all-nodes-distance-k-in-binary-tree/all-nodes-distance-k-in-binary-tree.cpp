/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> ans;
        unordered_map<TreeNode*, TreeNode*> parent;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if (temp->left) {
                q.push(temp->left);
                parent[temp->left] = temp;
            }
            if (temp->right) {
                q.push(temp->right);
                parent[temp->right] = temp;
            }
        }
        unordered_set<TreeNode*> visited;
        queue<TreeNode*> qt;
        qt.push(target);
        visited.insert(target);
        while (!qt.empty() && k--) {
            int n = qt.size();
            while (n--) {
                TreeNode* temp = qt.front();
                qt.pop();
                if (temp->left && visited.find(temp->left) == visited.end()) {
                    visited.insert(temp->left);
                    qt.push(temp->left);
                }
                if (temp->right && visited.find(temp->right) == visited.end()) {
                    visited.insert(temp->right);
                    qt.push(temp->right);
                }
                if (parent[temp] &&
                    visited.find(parent[temp]) == visited.end()) {
                    visited.insert(parent[temp]);
                    qt.push(parent[temp]);
                }
            }
        }
        while (!qt.empty()) {
            ans.push_back(qt.front()->val);
            qt.pop();
        }
        return ans;
    }
};