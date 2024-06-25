class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, 1e9);
        sort(coins.begin(), coins.end(), greater<>());
        dp[0] = 0;
        for(int i = 1; i <= amount; ++i) {
            for(auto coin : coins) {
                if(i >= coin) {
                    int sub = dp[i-coin];
                    if(sub != 1e9) dp[i] = min(dp[i], sub + 1);
                }
            }
        }
        return dp[amount] == 1e9 ? -1 : dp[amount];
    }
};