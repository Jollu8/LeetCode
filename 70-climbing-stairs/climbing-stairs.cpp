class Solution {
    vector<int> memo;

    int f(int n) {
        if(n <= 1) return 1;
        if(memo[n] != 0) return memo[n];

        return memo[n] =  f(n-1) + f(n-2);
        
    }

public:
    int climbStairs(int  n) {
        memo = vector<int>(n+1, 0);
    return f(n);
    }
};