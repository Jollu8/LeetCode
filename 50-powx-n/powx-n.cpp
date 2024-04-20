class Solution {
    double rec_pow(double x, long n) {
        if(n == 0) return 1;
        if(n < 0) {
            n = n*-1;
            x = 1/x;
        }
        if(!(n&1)) return rec_pow(x*x, n/2);
        else return x*rec_pow(x, n-1);
    }
public:
    double myPow(double x, int n) {
        return rec_pow(x, n);
    }
};