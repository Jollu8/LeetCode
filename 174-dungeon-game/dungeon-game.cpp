class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& A) {
        int n = A.size() - 1, m = A[0].size() - 1;
        vector<vector<int>> dp(n + 1, vector<int>(m + 1));
        dp[n][m] = A[n][m] > 0 ? 1 : abs(A[n].back()) + 1;

        for (int i = m - 1; i >= 0; --i) dp[n][i] = max(1, dp[n][i + 1] - A[n][i]);

        for (int i = n - 1; i >= 0; --i) dp[i][m] = max(1, dp[i + 1][m] - A[i][m]);

        for (int i = n - 1; i >= 0; --i) {
            for (int j = m - 1; j >= 0; --j) {
                int x = min(dp[i + 1][j], dp[i][j + 1]);

                if (A[i][j] <= 0)
                    dp[i][j] = abs(A[i][j]) + x;
                else
                    dp[i][j] = A[i][j] >= x ? 1 : x - A[i][j];
            }
        }
        return dp[0][0];
    }
};