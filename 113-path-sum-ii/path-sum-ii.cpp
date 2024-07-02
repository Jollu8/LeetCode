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
    vector<vector<int>> pathSum(TreeNode* root, int t) {
        vector<int> dp;
        vector<vector<int>> ans;
        function<void(TreeNode*, int)> bkg = [&](auto* r, int target) {
            if (!r)
                return;
            dp.push_back(r->val);
            if (!r->left && !r->right && target == r->val) {
                ans.emplace_back(dp);
           
            }

            bkg(r->left, target - r->val);

            bkg(r->right, target - r->val);
            dp.pop_back();
        };

        bkg(root, t);
        return ans;
    }
};