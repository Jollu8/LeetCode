class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int > dp(amount+1, 1e9);
        dp[0] = 0;

        for(int a = 1; a <= amount; ++a) {
            for(int i = 0; i < coins.size(); ++i) {
                if(coins[i] <= a) dp[a] = min(dp[a] , dp[a - coins[i]]+1);
            }
        }
        return dp[amount] == 1e9 ? -1 : dp[amount];
    }
};



