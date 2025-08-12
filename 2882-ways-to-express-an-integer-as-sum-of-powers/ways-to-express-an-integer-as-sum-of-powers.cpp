class Solution {
public:
    int numberOfWays(int n, int x) {
        const int MOD = 1e9 + 7;
        vector<vector<int>> dp(n + 1, vector<int>(n + 2, 0));

        for (int sum = 0; sum <= n; sum++) {
            for (int j = n; j >= 1; j--) {
                long long power = 1;
                for (int k = 0; k < x; k++) {
                    power *= j;
                    if (power > n) break;
                }

                if (power > n) {
                    dp[sum][j] = 0;
                    continue;
                }

                if (power == sum) {
                    dp[sum][j] = 1;
                } else if (power < sum) {
                    int take = dp[sum - power][j + 1];
                    int notTake = dp[sum][j + 1];
                    dp[sum][j] = (take + notTake) % MOD;
                } else {
                    dp[sum][j] = dp[sum][j + 1];
                }
            }
        }

        return dp[n][1];
    }
};