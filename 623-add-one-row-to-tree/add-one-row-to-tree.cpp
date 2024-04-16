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
    TreeNode* addOneRow(TreeNode* root, int val, int d, bool l = true) {
        if(d == 1) {
            TreeNode *left = l? root : nullptr, *right = l ? nullptr: root;
            return new TreeNode(val, left, right);
        }
        if(root) {
            root->left = addOneRow(root->left, val, d - 1);
            root->right = addOneRow(root->right, val, d - 1, false);
        }
        return root;
    }
};