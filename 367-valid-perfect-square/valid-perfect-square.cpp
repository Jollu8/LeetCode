class Solution {
public:
    bool isPerfectSquare(int n) {
        for (long long l = 0, r = n; l <= r; ) {
            long long m = l + (r - l) / 2;
            if (m * m == n) return true;
            m * m < n ? l = m + 1 : r = m - 1;
        }
        return false;
    }
};
