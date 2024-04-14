class Solution {
public:
    int minFallingPathSum(vector<vector<int>> &dp) {
     
        for (int i = 1; i < dp.size(); ++i) {
            for (int j = 0; j < dp[i].size(); ++j) {
                if (j == 0)
                    dp[i][j] += min(dp[i-1][j], dp[i-1][j+1]);
                else if (j == dp[i].size() - 1)
                    dp[i][j] += min(dp[i-1][j], dp[i-1][j-1]);
                else
                    dp[i][j] += min({dp[i-1][j], dp[i-1][j-1], dp[i-1][j+1]});
            }
        }
        return *min_element(dp.back().begin(), dp.back().end());
    }
};
