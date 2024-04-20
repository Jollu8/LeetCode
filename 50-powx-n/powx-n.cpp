class Solution {
    double rec_pow(double x, long n) {
        if (n == 0)
            return 1;
        if (n < 0) {
            n = n * -1;
            x = 1 / x;
        }
        if (!(n & 1))
            return rec_pow(x * x, n / 2);
        else
            return x * rec_pow(x, n - 1);
    }

public:
    double myPow(double x, int nn) {
        // return rec_pow(x, n);
        long  n = nn;
        bool neg = false;
        if (n < 0)neg = n = -n;


        double ans = 1.;

        while (n > 0) {
            if (n & 1)
                ans *= x;
            x *= x;
            n >>= 1;
        }
        return neg ? 1.0 / ans : ans;
    }
};