class Solution {
public:
    int stoneGameII(vector<int>& A) {
        int n = A.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1));
        vector<int> suf(n+1);
        for(int i = n-1; i >= 0; --i) suf[i] = suf[i+1] + A[i];
        for(int i = 0; i <= n; ++i) dp[i][n] = suf[i];

        for(int i = n-1; i>= 0; --i) {
            for(int j = n-1; j >= 1; --j) {
                for(int x = 1; x <= 2 * j && i + x <= n; ++x) 
                    dp[i][j] = max(dp[i][j], suf[i]-dp[i+x][max(j,x)]);
            }
        }
        return dp[0][1];

    }
};