
class Solution {
public:
    static const int N = 1025;
    using info = pair<uint16_t, bitset<N>>;

    void dfs(TreeNode* root, uint16_t level, bitset<N>& code,
             vector<info>& leaf) {
        if (!root)
            return;
        if (!root->left && !root->right)
            leaf.emplace_back(level, code);

        if (root->left) {
            code[level] = 0;
            dfs(root->left, level + 1, code, leaf);
        }
        if (root->right) {
            code[level] = 1;
            dfs(root->right, level + 1, code, leaf);
            code[level] = 0; // backtrack
        }
    }

    int countPairs(TreeNode* root, int distance) {
        vector<info> leaf;
        leaf.reserve(N);
        bitset<N> code = 1; // root is encoded as 1
        dfs(root, 1, code, leaf);
        int sz = leaf.size(), cnt = 0;
        for (int i = 0; i < sz - 1; i++) {
            auto& [level0, code0] = leaf[i];
            for (int j = i + 1; j < sz; j++) {
                auto& [level1, code1] = leaf[j];
                // Find the common prefix length (LCA)
                int len = 0, minLevel = min(level0, level1);
                if (level0 + level1 - 2 * minLevel > distance)
                    continue;
                while (len < minLevel && code0[len] == code1[len])
                    len++;
                // Calculate the distance using the levels and common length
                int d = (level0 + level1 - 2 * len);
                if (d <= distance)
                    cnt++;
            }
        }
        return cnt;
    }
};
