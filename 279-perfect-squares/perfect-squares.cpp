class Solution {
public:
    int numSquares(int n, int m = 1) {
        vector<long long> dp(max(m, n+1), INT_MAX);
        dp[0] = 0;
        for(int i{}, ii; (ii = i*i) <= n; ++i) 
            for(int j = max(m, ii); j<=n; ++j)
                dp[j] = min(dp[j], dp[j-ii]+1);
        return dp[n];
    }
};