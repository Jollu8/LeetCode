class Solution {
    vector<vector<int>> adj;
    vector<bool>vis;
    vector<int>ans;

    bool dfs(int v){
        vis[v] = true;
        for(auto i : adj[v]) {
            if(!vis[i] && dfs(i)) return true;
            else if(ans[i] == -1) return true;
        }
        ans[v] = 1;
        return false;
    }
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        adj.assign(n, vector<int>());
        vis.assign(n, false);
        ans.assign(n ,-1);

        for(auto &e : p) {
            adj[e[0]].push_back(e[1]);
        }

        for(auto i = 0; i < n; ++i) {
            if(!vis[i] && dfs(i)) return false;
        }
        return true;

    }
};