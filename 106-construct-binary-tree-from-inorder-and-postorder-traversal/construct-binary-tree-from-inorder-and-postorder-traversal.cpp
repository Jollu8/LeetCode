/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* build(vector<int>& post, int sp, int ep, vector<int>& in, int si,
                    int ei, map<int, int>& m) {
        if (sp > ep || si > ei)
            return NULL;
        TreeNode* root = new TreeNode(post[ep]);
        int o = m[root->val];
        int ei2 = o - si;
        int p = ei - o;
        root->left = build(post, sp, ep - p - 1, in, si, o - 1, m);
        root->right = build(post, sp - ep, ep - 1, in, o + 1, ei, m);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int a = inorder.size() - 1, b = postorder.size() - 1;
        map<int, int> m;
        for (int i = 0; i <= a; i++) {
            m[inorder[i]] = i;
        }
        return build(postorder, 0, b, inorder, 0, a, m);
    }
};