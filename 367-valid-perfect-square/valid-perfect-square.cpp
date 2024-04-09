class Solution {
public:
    bool isPerfectSquare(int n) {
        long long  l{}, r = n;
        while(l <= r) {
            long long m = l + (r -l) / 2;
            if(m * m == n) return true;
            if(m * m  < n) l = m+1;
            else r = m-1;
        }
        return false;
    }
};