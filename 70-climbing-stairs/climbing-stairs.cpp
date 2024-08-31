class Solution {

    void f(int n, vector<int>& memo) {
        if (n <= 1){
            return;
        }
        if (memo[n] != 0)
            return ;
        
        f(n - 1, memo);
        f(n - 2, memo);
        memo[n] = memo[n-1] + memo[n-2];
         
         
    }

public:
    int climbStairs(int n) {
        vector<int> memo(n + 1, 0);
        memo[0] = 1;
        memo[1] = 1;
        f(n, memo);
        for(auto i : memo) std::cout << i << " ";
        return memo[n];


    }
};