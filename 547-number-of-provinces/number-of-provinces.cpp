
class QU {
    vector<int> root;
    vector<int> rank;

public:
    int count;
    QU(int x) : root(x + 1), count(x) {
        iota(root.begin(), root.end(), 0);
        rank = root;
    }

    int find(int x) {
        if (x == root[x])
            return x;
        return root[x] = find(root[x]);
    }

    void u_set(int x, int y) {
        int r_x = find(x);
        int r_y = find(y);
        if (r_x != r_y) {
            if (rank[r_x] > rank[r_y])
                root[r_y] = r_x;
            else if (rank[r_x] < rank[r_y])
                root[r_x] = r_y;
            else {
                root[r_y] = r_x;
                rank[r_x]++;
            }
            --count;
        }
    }

    bool connect(int x, int y) { return find(x) == find(y); }
};

class Solution {
public:
    int findCircleNum(vector<vector<int>>& con) {
        QU root(con.size() + 1);
        for (auto i = 0; i < con.size(); ++i) {
            for (int j = 0; j < con[0].size(); ++j) {
                if (con[i][j])
                    root.u_set(i + 1, j + 1);
            }
        }
        return !(root.count) ? 0 : root.count-1;
    }
};