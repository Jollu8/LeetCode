class Solution {
    // unordered_map<int, int> mp;

    // int rec_memoziation(int n) {
    //     if (mp.contains(n)) return mp[n];

    //     int ans;
    //     if (n == 0 || n == 1) ans = 1;
    //     else ans = rec_memoziation(n - 1) + rec_memoziation(n - 2);
    //     mp[n] = ans;
    //     return ans;
    // }

    int dp(int n) {
        if (n < 2) return 1;
        vector<int> ans(n + 1);
        ans[0] = 1;
        ans[1] = 1;

        for (int i = 2; i < ans.size(); i++) ans[i] = ans[i-1] + ans[i - 2];
        return ans[n];
    }

public:
    int climbStairs(int n) {
        return dp(n);
    }
};