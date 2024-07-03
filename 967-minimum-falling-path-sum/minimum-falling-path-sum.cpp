class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> dp(n, vector<int>(m +2, 1e9));
        fill(dp[0].begin()+1, dp[0].begin() + m, 0);

        for(int i = 0; i < n; ++i) 
            for(int j = 1; j <= m; ++j)
                dp[i][j] = mat[i][j-1];
        
        for(int i = 1; i < n; i++)
            for(int j = 1; j <= m; ++j)
                dp[i][j] += min({dp[i-1][j], dp[i-1][j-1], dp[i-1][j+1]});
        
        return *min_element(dp[n-1].begin()+1, dp[n-1].begin() + n+1);
    }
};