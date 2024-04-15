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
    void getPaths(TreeNode *node, std::vector<int> &path, std::vector<std::vector<int>> &paths) {
        if (!node) return;

        path.push_back(node->val);
        if (!node->left && !node->right)
            paths.push_back(path);
        else {
            getPaths(node->left, path, paths);
            getPaths(node->right, path, paths);
        }
        path.pop_back();
    }

public:
    int sumNumbers(TreeNode *r) {
        vector<int> p;
        vector<vector<int>> ps;
        getPaths(r, p, ps);

        int sum{};
        for (auto &i: ps) {
            int cur{};
            sum += std::accumulate(i.begin(), i.end(), cur, [](int a, int b) { return a * 10 + b; });
        }
        return sum;
    }
};