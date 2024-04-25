class Solution {
    int maskSum( vector<int>& A, int mask) {
        int sum {};
        int n = A.size();
        for (int j = 0; j < n; ++j)
            if (mask & (1 << j)) sum += A[j];
        return sum;
    }
public:
    
    int distributeCookies(vector<int>& A, int k, int cur_k = 0, int cur_m = 0) {
        vector<vector<int>>dp(7, vector<int>(255));
        int n = A.size();
        int limit = (1 << n) - 1;
        if (cur_k == k - 1) return maskSum(A, limit - cur_m);

        if (dp[cur_k][cur_m] == 0) {
            dp[cur_k][cur_m] = INT_MAX;
            for (int mask_i = 1; mask_i < limit; ++mask_i) {
                if ((mask_i & cur_m) == 0 && bitset<7>(limit - mask_i - cur_m).count() >= k - cur_k - 1) {
                    int next_m = cur_m + mask_i;
                    int cur_sum_m = maskSum(A, mask_i);
                    dp[cur_k][cur_m] = min(dp[cur_k][cur_m],
                                                         max(distributeCookies(A, k, cur_k + 1, next_m), cur_sum_m));
                }
            }
        }
        return dp[cur_k][cur_m];
    }

};