class Solution {
    vector<vector<int>> adj;
    vector<bool>vis;
    vector<int>ans;

    bool dfs_rec(int v){
        vis[v] = true;
        for(auto i : adj[v])
            if(!vis[i] && !dfs_rec(i) || ans[i] == -1) return false;
     
        ans[v] = 1;
        return true;
    }
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        adj.assign(n, vector<int>());
        vis.assign(n, false);
        ans.assign(n ,-1);
        for(auto &e : p) adj[e[0]].push_back(e[1]);
    
        for(auto i = 0; i < n; ++i) if(!vis[i] && !dfs_rec(i)) return false;

        return true;
    }
};