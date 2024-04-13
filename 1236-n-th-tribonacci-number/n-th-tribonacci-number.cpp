class Solution {
    int trib_dp(int n ) {
        vector<int> a(n+1);
        if(n  < 4) {
            a.resize(3);
        }
        a[0] = 0;
        a[1] = 1;
        a[2] = 1;
        for(int i = 3; i < n+1; ++i) a[i] = a[i-1] + a[i-2] + a[i-3];
        return a[n];
    }
public:
    int tribonacci(int n) {
        return trib_dp(n);
    }
};