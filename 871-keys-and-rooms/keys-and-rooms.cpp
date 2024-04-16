class Solution {
    vector<vector<int>> adj;
    vector<bool> visited;
public:
    bool canVisitAllRooms(vector<vector<int>> &rooms) {
        int n = rooms.size();
        visited = vector<bool>(n, false);
        adj = move(rooms);
        dfs(0);

        for (int i = 0; i < n; ++i) if (!visited[i]) { return false; }
        return true;
    }

    void dfs(int i) {
        if (visited[i]) return;
        visited[i] = true;

        for (auto v: adj[i]) {
            if (!visited[v]) dfs(v);
        }

    }
};