class Solution {
public:
    int numSquares(int n) {
        vector<long long> dp(n+1, 10e9);
        dp[0] = 0;

        for(int i{}, ii; (ii = i*i) <= n; ++i)
            for(int j = max(1, ii); j <= n; ++j)
                dp[j] = min(dp[j], dp[j-ii]+1);
        return dp[n];

        
    }
};