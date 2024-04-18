
class Solution {
    vector<bool> vis;
    vector<vector<int>> ans;

    void dfs_memo(vector<vector<int>> &g, vector<int> path, int s, int d) {
        vis[s] = true;
        path.push_back(s);
        if (s == d) ans.emplace_back(path);
        else {
            for (auto v: g[s]) {
                if (!vis[v]) dfs_memo(g, path, v, d);
            }
        }
        path.pop_back();
        vis[s] = false;
    }

public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph) {
        vis = vector<bool>(graph.size(), false);
        dfs_memo(graph, {}, 0, graph.size()-1);
        return ans;

    }
};
