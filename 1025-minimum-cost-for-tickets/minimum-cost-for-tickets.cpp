class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(367);
        function<int(int)> memo = [&](int ind) {
            int n = days.size();
            if(ind >= n) return 0;
            if(dp[ind]) return dp[ind];

            int cost_day = costs[0] + memo(ind+1);
            int index;
            for(index = ind; index < n && days[index] < days[ind] + 7; ++index);

            int cost_week = costs[1]  + memo(index);
            for(index = ind; index < n && days[index]  < days[ind] + 30; ++index);

            int cost_month = costs[2] + memo(index);
            return dp[ind] =  min({cost_day, cost_week, cost_month}); 
        };
        
        return memo(0);
        
    }
};