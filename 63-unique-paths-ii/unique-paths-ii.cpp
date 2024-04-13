class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<int> dp(m + 1, 0);
        dp[1] = (mat[0][0] == 1) ? 0 : 1;

        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= m; ++j) {
                if(i == 1 && j == 1) continue;
                if ( mat[i - 1][j - 1] == 1) dp[j] = 0;
                else
                    dp[j] = dp[j] + dp[j - 1];
            }

        return dp[m];
    }
};
