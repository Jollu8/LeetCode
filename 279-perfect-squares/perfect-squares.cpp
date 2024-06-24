class Solution {
    vector<long long> dp;
    int helper(int n) {
        if(!n) return 0;
        if(dp[n] != -1) return dp[n];

        int ans = 1e9;
        for(int i = 1; i*i <= n; ++i) {
            int cnt = 1+helper(n-i*i);
            ans = min(ans, cnt);
        }
        return dp[n] = ans;
     }
public:

    int numSquares(int n) {
        dp = vector<long long>(n+1, -1);
        return helper(n);

        
    }
};