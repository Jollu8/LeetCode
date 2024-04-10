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

//  void postorder(TreeNode *root) {
//     if (!root) return;
//     postorder(root->left);
//     postorder(root->right);
//     m_vec.emplace_back(root->val);

//     root->left = nullptr;
//     root->right = nullptr;
//     }
class Solution {
public:

    vector<int> postorderTraversal(TreeNode* r) {
        if(!r) return {};
        vector<int> ans;
        stack<TreeNode*>stk, q;
        q.push(r);
        while(!q.empty()) {
            auto tmp = q.top();
            q.pop();
            stk.push(tmp);
            if(tmp->left)q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
        }

        while(!stk.empty()){
            ans.push_back(stk.top()->val);
            stk.pop();
        }
        return ans;
    }
};