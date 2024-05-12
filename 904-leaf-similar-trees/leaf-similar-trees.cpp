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
    
    void dfs(TreeNode*r, vector<int>&v) {
        if(!r) return ;
        if(!r->left && !r->right)v.push_back(r->val);
        dfs(r->left, v);
        dfs(r->right, v);

    }
public:
    bool leafSimilar(TreeNode* r1, TreeNode* r2) {
        vector<int> a,b;
        dfs(r1, a);
        dfs(r2, b);
        return a == b;
        
        
        }
};