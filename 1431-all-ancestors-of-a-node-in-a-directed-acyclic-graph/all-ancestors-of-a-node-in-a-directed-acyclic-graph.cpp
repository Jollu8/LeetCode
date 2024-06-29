class Solution {
    vector<vector<int>> ans;
    vector<vector<int>> directChild;
    
    void dfs(int x, int curr) {
        for (auto& ch : directChild[curr])
            if (ans[ch].size() == 0 || ans[ch].back() != x) {
                ans[ch].push_back(x);
                dfs(x, ch);
            }
    }

public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        ans = vector<vector<int>>(n);
        directChild = vector<vector<int>>(n);
        for (auto& e : edges)
            directChild[e[0]].push_back(e[1]);

        for (int i = 0; i < n; i++)
            dfs(i, i);
        return ans;
    }
};