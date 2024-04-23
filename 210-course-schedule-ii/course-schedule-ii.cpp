class Solution {
    vector<vector<int>> adj;
    vector<int> state, ans;

    bool dfs(int v) {
        state[v] = 1;
        for (int i: adj[v]) 
            if (state[i] == 1 || (state[i] == 0 && !dfs(i))) return false;
        state[v] = 2;
        ans.push_back(v);
        return true;
    }

public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        adj.resize(n);
        state.resize(n);

        for (auto &e: p) adj[e[0]].push_back(e[1]);

        for (int i = 0; i < n; ++i) 
            if (!state[i] && !dfs(i)) return {};

        return ans;
    }
};
