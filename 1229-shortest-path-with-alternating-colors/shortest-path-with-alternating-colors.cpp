class Solution {
    vector<vector<pair<int, int>>> adj;
    vector<int> ans;

public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>> &a,
                                         vector<vector<int>> &b) {
        adj = vector<vector<pair<int, int>>>(n);
        ans = vector<int>(n, -1);
        for (auto &v: a)
            adj[v[0]].emplace_back(v[1], 0);
        for (auto &v: b)
            adj[v[0]].emplace_back(v[1], 1);

        queue<vector<int>> qv;
        qv.emplace(vector<int>{0, 0, -1});

        while (!qv.empty()) {
            auto front = qv.front();
            qv.pop();
            ans[front[0]] = ans[front[0]] != -1 ? ans[front[0]] : front[1];

            for (auto &e: adj[front[0]]) {
                if (front[2] != e.second && e.first != -1) {
                    qv.emplace(vector<int>{e.first, front[1] + 1, e.second});
                    e.first = -1;
                }
            }
        }
        return ans;
    }
};