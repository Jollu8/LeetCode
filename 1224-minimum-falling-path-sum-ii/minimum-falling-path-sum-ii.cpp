class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        int n = A.size();
        vector<vector<int>> dp(n, vector<int>(n));
        dp[0] = A[0];
        
        for(auto i = 1; i < n; ++i) {
            auto tmp = dp[i-1];
            sort(tmp.begin(), tmp.end());
            for(auto j = 0; j < n; ++j) 
                dp[i][j] = A[i][j] + (tmp[0] != dp[i-1][j] ? tmp[0] : tmp[1]); 
        }
        return *min_element(dp[n-1].begin(), dp[n-1].end());
    }
};