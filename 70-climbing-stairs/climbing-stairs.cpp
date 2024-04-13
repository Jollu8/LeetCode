class Solution {
    unordered_map<int, int> mp;
public:
    int climbStairs(int n) {
        if(mp.contains(n)) return mp[n];
        
        int ans;
        if(n == 0 || n == 1) ans  = 1;
        else ans = climbStairs(n-1) + climbStairs(n-2);
        mp[n] = ans;
        return ans;
    }
};