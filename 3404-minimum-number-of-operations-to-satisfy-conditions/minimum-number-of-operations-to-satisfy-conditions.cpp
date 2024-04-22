class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int dp[2][10] = {};

        for (int i = 1; i <= cols; ++i) {
            int count[10] = {};
            for (int j = 0; j < rows; ++j)
                ++count[grid[j][i - 1]];
            for (int v = 0; v < 10; ++v)
                for (int p = 0; p < 10; ++p)
                    if (p != v)
                        dp[i % 2][v] =
                            max(dp[i % 2][v], count[v] + dp[!(i % 2)][p]);
        }
        return rows * cols -
               *max_element(begin(dp[cols % 2]), end(dp[cols % 2]));
    }
};