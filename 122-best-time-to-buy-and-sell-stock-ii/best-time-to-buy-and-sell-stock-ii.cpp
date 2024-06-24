class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int > dp(n);
        int buy = prices[0];

        for(int i  = 1; i < n; i++) {
            if(buy < prices[i]) {
                dp[i] = dp[i-1] +(prices[i] - buy);
                buy = prices[i];
            }else dp[i] = dp[i-1];

            buy  = min(buy, prices[i]);
        }
        return dp[n-1];
    }
};