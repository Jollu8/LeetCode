class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<long > dp(amount+1, INT_MAX);
        dp[0] = 0;

        for(int a = 1; a <= amount; ++a) {
            for(int i = 0; i < coins.size(); ++i) {
                if(coins[i] <= a) dp[a] = min(dp[a] , dp[a - coins[i]]+1);
            }
        }
        return dp[amount] == INT_MAX ? -1 : dp[amount];
    }
};



