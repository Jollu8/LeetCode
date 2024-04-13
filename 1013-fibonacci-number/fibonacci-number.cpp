class Solution {
    unordered_map<int, int>mp;
    int fib_memo(int n) {
        if(mp.contains(n)) return mp[n];
        
        int ans;
        if(n < 2) ans = n;
        else ans = fib(n-1) + fib(n-2);
        
        mp[n] = ans;
        return ans;
    }

    public:
    int fib(int n) {
        if(n == 0) return 0;
        vector<int> ans(n+1 );
        ans[0] = 0;
        ans[1] = 1;
        for(int i = 2; i < n+1; ++i) ans[i] = ans[i-1] + ans[i-2];
        return ans[n];

    }
};