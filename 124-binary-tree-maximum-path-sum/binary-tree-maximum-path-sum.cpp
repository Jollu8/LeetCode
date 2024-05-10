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
    int m_sum(TreeNode *r, int& ans) {
        if(!r) return 0;
        int l = r->val + m_sum(r->left, ans);
        int ri = r->val + m_sum(r->right, ans);
        ans =  max({
            ans, r->val, l, ri, l + ri - r->val 
        });
        return max({l, ri, r->val});
    }
public:
    int maxPathSum(TreeNode* root) {
        int ans  = INT_MIN;
        m_sum(root, ans);
        return ans;
    }
};