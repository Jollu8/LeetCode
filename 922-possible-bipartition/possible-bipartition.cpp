class Solution {
    vector<vector<int>> g;
    vector<int> color;

    bool dfs(int i, int c) {
        color[i] = c;
        for (auto v: g[i]) {
            if (color[v] == -c) continue;
            if (color[v] == c || !dfs(v, -c)) return false;
        }
        return true;
    }

public:
    bool possibleBipartition(int n, vector<vector<int>> &d) {
        ++n;
        g = vector<vector<int>>(n);
        color = vector<int>(n, 0);

        for (auto &v: d) {
            g[v[0]].push_back(v[1]);
            g[v[1]].push_back(v[0]);
        }
        for (int i = 1; i < n; ++i) {
            if (color[i] == 0 && !dfs(i, 1)) return false;
        }

        return true;
    }
};