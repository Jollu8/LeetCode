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
    vector<int> preorderTraversal(TreeNode* r) {
        if (!r)
            return {};
        vector<int> ans;

        stack<TreeNode*> q;
        q.push(r);
        while (!q.empty()) {
            auto tmp = q.top();
            q.pop();
            if (tmp->right)
                q.push(tmp->right);
            if (tmp->left)
                q.push(tmp->left);
            ans.push_back(tmp->val);
        }
        return ans;
    }
};