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
    std::vector<double> averageOfLevels(TreeNode* root) {
        std::vector<double> ans;
        std::queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            std::vector<long> level;
            std::ranges::generate_n(std::back_inserter(level), q.size(), [&]() {
                auto node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                return node->val;
            });
            ans.push_back(std::reduce(level.begin(), level.end(), 0.0) / level.size());
        }
        return ans;
    }
};