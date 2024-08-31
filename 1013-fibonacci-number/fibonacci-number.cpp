class Solution {
    unordered_map<int, int> memo;
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        if(memo.contains(n)) return memo[n];
        memo[n] = fib(n-1) + fib(n-2);
        return memo[n];
    }
};