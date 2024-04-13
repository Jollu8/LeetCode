
class Solution {
    unordered_map<int, int> mp;
    int memo(vector<int> &c, int i) {
        if(i < 0) return 0;
        if(mp.contains(i)) return mp[i];
        mp[i] = max(memo(c, i-2) + c[i], memo(c, i-1));
        return mp[i];
    }
    int dp(vector<int>& c) {
        vector<int> buf(c.size() + 1);
        buf[0] = 0;
        buf[1] = c[0];
        for (int i = 1; i < c.size(); ++i)
            buf[i + 1] = max(buf[i], buf[i - 1] + c[i]);
        return buf[c.size()];
    }

    // itertive =============
    int iter(vector<int>& nums) {

        int prev1 = 0, prev2 = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int temp = prev2;
            prev2 = max(prev2, prev1 + nums[i]);
            prev1 = temp;
        }
        return prev2;
    }

public:
    int rob(vector<int>& n) {
        if (n.empty())
            return 0;
        return memo(n, n.size()-1);
    }
};