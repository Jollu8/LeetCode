class Solution {
    vector<int> color;
    vector<vector<int>>g;

    bool dfs(int i) {
        for(auto v : g[i]) {
            if(color[v] == color[i]) return false;
            if(color[v] == -1) {
                color[v] = 1 - color[i];
                if(!dfs(v)) return false;
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        color = vector<int>(graph.size(), -1);
        g = move(graph);

        for(int i = 0; i < g.size(); ++i) {
            if(color[i] == -1){
                color[i] = 0;
                if(!dfs(i)) return false;
            }
        }
        return true;
    }
};