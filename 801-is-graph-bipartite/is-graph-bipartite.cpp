
class Solution {
    vector<int> color;
    vector<vector<int>> g;

    bool dfs(int i, int c) {
        color[i] = c;
        for (auto v : g[i]) {
            if (color[v] == -c) continue;
            if (color[v] == c || !dfs(v, -c))
                return false;
        }
        return true;
    }

public:
    bool isBipartite(vector<vector<int>>& graph) {
        color = vector<int>(graph.size(), 0);
        g = move(graph);

        for (int i = 0; i < g.size(); ++i) {
            if (color[i] == 0 && !dfs(i, 1))
                return false;
        }
        return true;
    }
};