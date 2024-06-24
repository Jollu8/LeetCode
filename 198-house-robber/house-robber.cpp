class Solution {
public:
    int rob(vector<int>& A) {
        
        int n = A.size();
        if(n < 3) return *max_element(A.begin(), A.end());
        vector<int >dp(n);
        dp[0] = A[0];
        dp[1] = max(A[1],A[0]);

        for(int i = 2; i < n; ++i) {
            dp[i] = max(dp[i-1], A[i] + dp[i-2]);
        }
        return dp[n-1];
    }
};