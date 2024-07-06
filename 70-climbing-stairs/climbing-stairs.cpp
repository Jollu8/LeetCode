class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int, int> dp;
        function<int(int)> memo = [&](int ind) {
            if(ind < 2) return 1;
            if(dp.contains(ind)) return dp[ind];
            return dp[ind] = memo(ind-1) + memo(ind-2);
        };
       return memo(n);
      
    }
};