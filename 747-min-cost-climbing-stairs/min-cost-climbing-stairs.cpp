class Solution {
    int dp(vector<int> &c) {
        for(int i = 2; i < c.size(); ++i)c[i] += min(c[i-1], c[i-2]);
        return min(c[c.size()-1], c[c.size()-2]);
    }
public:
    int minCostClimbingStairs(vector<int>& c) {
        return dp(c);

    }
};