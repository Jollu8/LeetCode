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
    auto generate(int a, int b) {
        std::vector<TreeNode*> ans;
        if(a > b ) {
            ans.push_back(nullptr);
            return ans;
        }

        for(int i = a; i <= b; ++i) {
            auto l = generate(a, i - 1);
            auto r = generate(i + 1, b);

            for(int j = 0; j < l.size(); ++j) {
                for(int k = 0; k < r.size(); ++k) {
                    auto *root = new TreeNode(i);

                    root->left = l[j];
                    root->right = r[k];
                    ans.push_back(root);
                }
            }
        }
        return ans;

    }
public:
    vector<TreeNode*> generateTrees(int n) {
        if(n == 0) return {0};
        return generate(1, n);
    }
};