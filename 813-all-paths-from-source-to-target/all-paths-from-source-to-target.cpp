class Solution {
    vector<vector<int>> ans;
    vector<vector<int>> g;
    vector<int> path;

    void dfs_memo(int s, int d) {
        path.push_back(s);
        if (s == d)
            ans.emplace_back(path);
        else {
            for (auto v: g[s])
                dfs_memo(v, d);
        }
        path.pop_back();
    }

    void dfs_st(int d) {
        stack<pair<int, vector<int>>> st;
        st.push({0, {0}});
        while (!st.empty()) {
            auto [u, path_] = st.top();
            st.pop();
            if (u == d) ans.emplace_back(path_);
            else {
                for (auto v: g[u]) {
                    vector<int> newPath = path_;
                    newPath.push_back(v);
                    st.push({v, newPath});
                }
            }
        }
    }


public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph) {
        int n = (int) graph.size();
        path.reserve(n);
        this->g = std::move(graph);
//        dfs_memo(0, n - 1);
        dfs_st(n - 1);
        return ans;
    }
};