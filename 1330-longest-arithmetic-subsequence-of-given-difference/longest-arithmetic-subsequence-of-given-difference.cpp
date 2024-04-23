class Solution {
public:
    int longestSubsequence(vector<int>& a, int d) {
        int ans{};
        unordered_map<int, int> dp;
        for (int i = 0; i < a.size(); ++i) {
            dp[a[i]] = dp[a[i] - d]+1;
            ans = max(ans, dp[a[i]]);
        }

        return ans;
    }
};