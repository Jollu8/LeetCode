class Solution {
    vector<int> dp;
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, INT_MAX-1);
        dp[0] = 0;

        for(int j = 1; j <= amount; ++j)
            for(int i = 0; i < coins.size(); ++i) {
                if(coins[i] <= j) dp[j] = min(dp[j], dp[j - coins[i]]+1);
            }
        return dp[amount] != INT_MAX-1 ? dp[amount] : -1;
        
        
    }
};
