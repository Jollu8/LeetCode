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

// vector<int> inorderTraversal(TreeNode* r) {
//     if (!r)
//         return {};
//     vector<int> ans;
//     stack<TreeNode*> q;

//     TreeNode* cur = r;
//     while (r || !q.empty()) {

//         while (cur) {
//             q.push(cur);
//             cur = cur->left;
//         }

//         cur = q.top();
//         q.pop();
//         ans.push_back(cur->val);
//         cur = cur->right;
//     }
//     return ans;
// }
class Solution {
    void rec_iner(TreeNode*r, vector<int> &ans){
        if(!r) return ;

        rec_iner(r->left, ans);
        ans.push_back(r->val);
        rec_iner(r->right, ans);
    }
public:
    vector<int> inorderTraversal(TreeNode* r) {
        if (!r)
            return {};
        vector<int> ans;
        rec_iner(r, ans);

        return ans;
    }
};