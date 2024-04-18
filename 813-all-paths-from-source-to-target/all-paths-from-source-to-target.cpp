
class Solution {
    vector<vector<int>> ans;

    void dfs_memo(vector<vector<int>>& g, vector<int> path, int s, int d) {
        path.push_back(s);
        if (s == d)
            ans.emplace_back(path);
        else {
            for (auto v : g[s])
                dfs_memo(g, path, v, d);
        }
        path.pop_back();
    }

public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dfs_memo(graph, {}, 0, graph.size() - 1);
        return ans;
    }
};
