class Solution {
public:
    int longestArithSeqLength(vector<int>& A) {
    int res = 2, n = A.size();
    vector<unordered_map<int, int>> dp(n);
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)  {
            int d = A[j] - A[i];
            dp[j][d] = max(2, dp[i][d] + 1);
            res = max(res, dp[j][d]);
        }
    return res;
}

};