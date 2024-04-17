
class Solution {
    vector<vector<int>> *adj;
    vector<bool> *vis;
public:
    int minReorder(int n, vector<vector<int>> &a) {
        vis = new vector<bool>(n, false);
        adj = new vector<vector<int>>(n);

        for (auto &v: a) {
            adj->at(v[0]).emplace_back(v[1]);
            adj->at(v[1]).emplace_back(-v[0]);
        }

        return dfs_rec(0);
    }

    int dfs_rec(int i) {
        int ans{};
        vis->at(i) = true;

        for (auto v: adj->at(i)) {
            if (!(vis->at(abs(v)))) ans += dfs_rec(abs(v)) + (v > 0);
        }
        return ans;
    }
};

// int main() {
//     vector<vector<int>> adj{{0, 1},
//                             {1, 3},
//                             {2, 3},
//                             {4, 0},
//                             {4, 5}};
//     Solution s;
//     std::cout << s.minReorder(6, adj);

// }
