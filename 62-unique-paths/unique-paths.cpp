class Solution {

public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        function<int(int, int, int, int)> memo = [&](int i, int j, int m, int n) {
            if (i == m && j == n) return 1;
            if(i > m || j > n) return 0;

            if (dp[i][j] != -1) return dp[i][j];
            
            return dp[i][j] = memo(i + 1, j, m, n) + memo(i, j + 1, m, n);
        };
        return memo(0, 0, m-1 , n-1);
    }
};