class Solution {
public:
    int countSquares(vector<vector<int>>& mat) {
        int count{},  n = mat.size(), m = mat[0].size();
        vector<vector<int>> dp(n, vector<int> (m));

        for(int i = 0;i < n; ++i) {
            dp[i][0] = mat[i][0];
            count += dp[i][0];
        }
        for(int i = 1; i < m; ++i) {
            dp[0][i] = mat[0][i];
            count += dp[0][i];
        }

        for(int i = 1; i < n; ++i) {
            for(int j = 1; j < m; ++j) {
                if(mat[i][j] == 1) {
                    dp[i][j] = min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]})+1;
                    count += dp[i][j];
                }
            }
        }
        return count;
        
    }
};