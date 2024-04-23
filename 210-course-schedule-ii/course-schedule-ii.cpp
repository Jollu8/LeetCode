class Solution {
    vector<vector<int>> adj;
    vector<int >state;
    vector<int> ans;

    bool dfs(int v) {
        state[v] = 1;
        for (auto i: adj[v]) if (state[i] == 1 || state[i] == 0 && !dfs(i) ) return false;
        state[v] = 2;
        ans.push_back(v);
        return true;
    }

public:
    vector<int> findOrder(int n, vector<vector<int>> &p) {
        adj.assign(n, vector<int>());
        state.assign(n, 0);

        for (auto &e: p)adj[e[0]].push_back(e[1]);

        for (auto i = 0; i < n; ++i) if (state[i] == 0 && !dfs(i))return {};

        return ans;

    }
};