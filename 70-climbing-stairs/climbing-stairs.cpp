class Solution {
    unordered_map<int, int>mp;

    int f(int n) {
        if(n <= 1) return 1;
        if(mp.contains(n)) return mp[n];

        return mp[n] =  f(n-1) + f(n-2);
        
    }

public:
    int climbStairs(int  n) {
    return f(n);
    }
};