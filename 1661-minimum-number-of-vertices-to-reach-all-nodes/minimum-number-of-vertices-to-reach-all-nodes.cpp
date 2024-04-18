class Solution {
    int n;
    vector<vector<int>> edges;
    vector<int> ans;

    void degree() {
        vector<int> inDegree(n, 0);
        for (auto &edge: this->edges)
            inDegree[edge[1]]++;

        for (int i = 0; i < n; ++i)
            if (inDegree[i] == 0)
                ans.push_back(i);
    }

    void undegree() {
        vector<bool> seen(n,false);
        for(auto &v : edges)seen[v[1]] = true;
        for(int i = 0 ; i < n; ++i) if(!seen[i]) ans.push_back(i);
    }

public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>> &edges) {
        this->n = n;
        this->edges = std::move(edges);
        undegree();
        return ans;
    }
};
