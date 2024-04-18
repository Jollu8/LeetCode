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
     int ans = INT_MAX, pre = -1;
public:
    int getMinimumDifference(TreeNode* root) {
        if(root->left) getMinimumDifference(root->left);
        if(pre >= 0) ans = min(ans, root->val - pre);
        pre = root->val;
        if(root->right) getMinimumDifference(root->right);
        
        root->left = nullptr;
        root->right = nullptr;
        return ans;
    }
};