using namespace std::string_literals;
class Solution {

    vector<string> ans;
    vector<int> dp;

    void bkg_dfs(TreeNode *r) {
        if (!r) return;

        dp.emplace_back(r->val);
        bkg_dfs(r->left);
        bkg_dfs(r->right);

        if (!r->left && !r->right) {
            int n = dp.size() - 1;
            string str;
            for (int i = 0; i < n; ++i) str += to_string(dp[i]) + "->"s;

            str += to_string(dp[n]);
            ans.emplace_back(str);
        }
        dp.pop_back();
    }

public:
    vector<string> binaryTreePaths(TreeNode *root) {
        bkg_dfs(root);
        return ans;
    }
};