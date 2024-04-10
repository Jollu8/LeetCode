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

//  vector<int> preorderTraversal(TreeNode* r) {
//         if (!r)
//             return {};
//         vector<int> ans;

//         stack<TreeNode*> q;
//         q.push(r);
//         while (!q.empty()) {
//             auto tmp = q.top();
//             q.pop();
//             if (tmp->right)
//                 q.push(tmp->right);
//             if (tmp->left)
//                 q.push(tmp->left);
//             ans.push_back(tmp->val);
//         }
//         return ans;
//     }
class Solution {
    void pre_rec(TreeNode *r, vector<int> &ans){
        if(!r) return;
        ans.push_back(r->val);
        pre_rec(r->left, ans);
        pre_rec(r->right, ans);
    }
public:
    vector<int> preorderTraversal(TreeNode* r) {
        if (!r)
            return {};
        vector<int> ans;

        pre_rec(r, ans);
        return ans;
    }
};