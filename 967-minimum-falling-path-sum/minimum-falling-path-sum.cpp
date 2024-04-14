class Solution {
public:
    int minFallingPathSum(vector<vector<int>> &mat) {
        vector<vector<int>> dp = mat;
        for (int i = 1; i < mat.size(); ++i) {
            for (int j = 0; j < mat[i].size(); ++j) {
                if (j == 0)
                    dp[i][j] += min(dp[i-1][j], dp[i-1][j+1]);
                else if (j == mat[i].size() - 1)
                    dp[i][j] += min(dp[i-1][j], dp[i-1][j-1]);
                else
                    dp[i][j] += min({dp[i-1][j], dp[i-1][j-1], dp[i-1][j+1]});
            }
        }
        return *min_element(dp.back().begin(), dp.back().end());
    }
};
