class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>>dp(n+1, vector<int>(m+1, 1e9));

        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= m; ++j)
                dp[i][j] = grid[i-1][j-1];


        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= m; ++j){
                if(1 == i && 1 == j) continue;
                dp[i][j] = grid[i-1][j-1] + min(dp[i-1][j], dp[i][j-1]);
            }
        
        return dp[n][m];
        
    }
};