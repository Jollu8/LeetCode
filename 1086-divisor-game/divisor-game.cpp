class Solution {
   unordered_map<int, int>dp;
public:
    bool divisorGame(int n) {
        if(!dp.contains(n)) dp[n] = 0;
        if(dp[n] == 0) {
            for(int i = 1; dp[n] != 1 && i <= n/ 2; ++i) 
            dp[n] = n%i == 0 ? divisorGame(n-i) ? -1 : 1 : -1;
        }
        return dp[n] == 1;
    }
}; 