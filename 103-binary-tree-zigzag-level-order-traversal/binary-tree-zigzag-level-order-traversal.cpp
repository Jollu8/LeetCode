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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
        if(!root) return {};
        std::vector<vector<int>> ans;
        std::queue<TreeNode *> q;
        q.push(root);
        int n{};
        while (!q.empty()) {
            std::vector<int> level;
            std::ranges::generate_n(std::back_inserter(level), q.size(), [&]() {
                auto tmp = q.front();
                q.pop();
                if (tmp->left) q.push(tmp->left);
                if (tmp->right) q.push(tmp->right);
                return tmp->val;
            });
            if (!(n&1)){
                ++n;
                ans.emplace_back(level);
            }
            else {
                ++n;
                reverse(level.begin(), level.end());
                ans.emplace_back(level);
            }

        }
        return ans;
    }
};