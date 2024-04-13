int speed = [] {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int minPathSum(vector<vector<int>>& g) {
        vector<vector<int>> ans(g.size()+1, vector<int>(g[0].size()+1, INT_MAX));

        for(int i = 1; i < ans.size(); ++i) {
            for(int j = 1; j < ans[0].size(); ++j) {
                ans[i][j] = g[i-1][j-1];
            }
        }

        for(int i = 1; i < ans.size(); ++i) {
            for(int j = 1; j < ans[0].size(); ++j) {
                if(i == 1 && j == 1) continue ;
                ans[i][j] += min(ans[i-1][j], ans[i][j-1]);
            }
        }

        return ans[g.size()][g[0].size()];
    }
};