class Solution {
    unordered_map<int, int> mp;
    int memo(vector<int> &c, int i) {
        if(i == 0 || i == 1) return c[i];
        if(mp.contains(i)) return mp[i];
        return mp[i] = c[i] +min(memo(c, i-1), memo(c, i-2));
    }
    int dp(vector<int> &c) {
        for(int i = 2; i < c.size(); ++i)c[i] += min(c[i-1], c[i-2]);
        return min(c[c.size()-1], c[c.size()-2]);
    }
public:
    int minCostClimbingStairs(vector<int>& c) {
        // return dp(c);
        return min(memo(c, c.size()-1), memo(c, c.size()-2));

    }
};