class Solution {
    vector<vector<char>>adj;
    int r,c;

    void dfs(int i, int j) {
        if(i < 0 || j < 0 || i>= r || j >= c || adj[i][j] == '0') return ;
        adj[i][j] = '0';
        dfs(i-1, j);
        dfs(i+1, j);
        dfs(i, j-1);
        dfs(i, j+1); 
    }
public:
    int numIslands(vector<vector<char>>& g) {
        adj = move(g);
        r = adj.size(), c = adj[0].size();
        int ans{};
        for(int i = 0; i < r; ++i) {
            for(int j = 0; j  < c; ++j) {
                if(adj[i][j] == '1') {
                    dfs(i, j);
                    ++ans;
                }
            }
        }
        return ans;
    }
};