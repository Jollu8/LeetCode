class Solution {
public:
    int maxProfit(vector<int>& A) {
        vector<int> dp(A.size());
        dp[0] = 0;
         int idx = A[0];
        for(int i = 1; i < A.size(); ++i) {
            dp[i] = max(dp[i-1], A[i] - idx);
            idx = min(idx, A[i]);
        }
        return dp[A.size()-1];
    }
};