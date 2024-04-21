class DisJ {
    vector<int> id;
    vector<int> rank;

public:
    DisJ(int v) : id(v) {
        iota(id.begin(), id.end(), 0);
        rank = id;
    }

    int find(int x) {
        if (x == id[x])
            return x;
        return id[x] = find(id[x]);
    }

    bool connect(int x, int y) { return find(x) == find(y); }

    void edge_union(int x, int y) {
        x = find(x);
        y = find(y);
        if (x != y) {
            if (rank[x] > rank[y])
                id[y] = x;
            else if (rank[x] < rank[y])
                id[x] = y;
            else {
                id[y] = x;
                ++rank[x];
            }
        }
    }
};

class Solution {

    bool disjoint_set(int n, vector<vector<int>>& edges, int s, int d) {
        DisJ dj(n);
        for (auto& v : edges)
            dj.edge_union(v[0], v[1]);

        return dj.connect(s, d);
    }

public:
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
        return disjoint_set(n, edges, s, d);

    }
};

