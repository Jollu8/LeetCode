class Solution {
    vector<vector<int>> adj;
    vector<int> colors;

public:
    vector<int> eventualSafeNodes(vector<vector<int>> &g) {
         int n = g.size();
        adj = std::move(g);
        colors = vector<int>(n, 0); // Инициализация вектора colors
        vector<int> ans;

        for (auto i = 0; i < n; ++i)
            if (dfs_rec(i)) // Использование функции dfs_iter
                ans.push_back(i);

        return ans;
    

        // return bruteForce();
    }

private:

    vector<int> bruteForce() {
        vector<bool> colors(adj.size(), false);
        for (auto i = 0; i < adj.size(); ++i)
            if (adj[i].empty())colors[i] = true;

        vector<int> ans;
        for (auto i = 0; i < adj.size(); ++i) {
            int cnt{};
            for (auto j: adj[i]) {
                if (colors[j])++cnt;
            }
            if (cnt == adj[i].size()) ans.push_back(i);
        }
        return ans;
    }


    bool dfs_rec(int i) {
        if (colors[i] > 0)
            return colors[i] == 2;
        colors[i] = 1;

        for (auto v: adj[i])
            if (!dfs_rec(v))
                return false;
        colors[i] = 2;
        return true;
    }

    bool dfs_iter(int i) {
        stack<int> st;
        st.push(i);

        while (!st.empty()) {
            i = st.top();
            if (colors[i] > 0) {
                if (colors[i] == 2) {
                    st.pop();
                    continue;
                } else {
                    return false;
                }
            }
            colors[i] = 1;
            for (auto v: adj[i]) {
                if (colors[v] == 0)
                    st.push(v);
                else if (colors[v] == 1)
                    return false;
            }
            colors[i] = 2;
        }

        return true;
    }
};