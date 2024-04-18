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
template<typename T>
concept IsTreeNode = requires(T a) {
    { a->left } -> std::convertible_to<T>;
    { a->right } -> std::convertible_to<T>;
    { a->val } -> std::convertible_to<int>;
};

class Solution {
public:

    template<IsTreeNode T>
    int kthSmallest(T root, int &k) {
        if (root) {
            int x = kthSmallest(root->left, k);
            return !k ? x : !--k ? root->val : kthSmallest(root->right, k);
        }
        return -1;
    }
};
