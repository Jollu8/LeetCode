class Solution {
    vector<vector<int>> adj;
    vector<bool> visited;

public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        visited = vector<bool>(n, false);
        adj = move(rooms);
        // dfs_rec(0);
        // dfs_iter(0);
        bfs_iter(0);

        for (int i = 0; i < n; ++i)
            if (!visited[i]) {
                return false;
            }
        return true;
    }

    void  bfs_iter(int i ) {
        queue<int> q;
        q.push(i);
        

        while(!q.empty()) {
            i = q.front();
            q.pop();
            visited[i] = true;
            for(auto v : adj[i]) {
                if(!visited[v]) q.push(v); 
            }

        }
    }

    void dfs_iter(int i) {
        stack<int> st;
        st.push(i);

        while (!st.empty()) {
            i = st.top();
            st.pop();
            visited[i] = true;
            for (auto v : adj[i])
                if (!visited[v])
                    st.push(v);
        }
    }

    void dfs_rec(int i) {
        if (visited[i])
            return;
        visited[i] = true;

        for (auto v : adj[i]) {
            if (!visited[v])
                dfs_rec(v);
        }
    }
};