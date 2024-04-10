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
    vector<int> inorderTraversal(TreeNode* r) {
        if (!r)
            return {};
        vector<int> ans;
        stack<TreeNode*> q;
  
        TreeNode* cur = r;
        while (cur || !q.empty()) {
           
            while (cur ) {
                q.push(cur);
                cur = cur->left;
            }

            cur = q.top();
            q.pop();
            ans.push_back(cur->val);
            cur = cur->right;
        }
        return ans;
    }
};