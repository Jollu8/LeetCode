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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty()) return nullptr;
        if(nums.size() == 1) return new TreeNode(nums[0]);

        auto mid = nums.size() / 2;
        auto *root = new TreeNode(nums[mid]);

        std::vector<int> lefts (nums.begin(), nums.begin() + mid);
        std::vector<int> rights(nums.begin() + mid + 1, nums.end());

        root->left = sortedArrayToBST(lefts);
        root->right = sortedArrayToBST(rights);

        return root;
        
    }
};