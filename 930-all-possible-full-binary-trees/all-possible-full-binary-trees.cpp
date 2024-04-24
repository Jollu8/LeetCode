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

    std::vector<TreeNode*> generateFullBinaryTrees(int n) {
    if (n % 2 == 0) {
        return std::vector<TreeNode*>();  }

    if (n == 1) {
        return {new TreeNode(0)};
    }

    std::vector<TreeNode*> trees;
    for (int i = 1; i < n; i += 2) {
        std::vector<TreeNode*> left_trees = generateFullBinaryTrees(i);
        std::vector<TreeNode*> right_trees = generateFullBinaryTrees(n - i - 1);
        for (auto l : left_trees) {
            for (auto r : right_trees) {
                TreeNode* current_tree = new TreeNode(0);
                current_tree->left = l;
                current_tree->right = r;
                trees.push_back(current_tree);
            }
        }
    }
    return trees;
}
public:
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n == 0) return {};
        return generateFullBinaryTrees(n);
    }
};