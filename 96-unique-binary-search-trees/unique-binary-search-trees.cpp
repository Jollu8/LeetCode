class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n + 1);
        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; i++) {
            int tmp{};
            for (int j{}, k = i - 1; j < k; ++j, --k) tmp += dp[j] * dp[k];

            tmp *= 2;
          
            dp[i] = i&1 ? tmp + dp[i / 2] * dp[i / 2] : tmp;
        }
        return dp[n];
    }
};