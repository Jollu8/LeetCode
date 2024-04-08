// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
    int rec(int l, int r) {
        if (l < r) {
            int m = l + (r - r) / 2;
            if (isBadVersion(m))
                return rec(l, m);
            else
                return rec(m + 1, r);
        }
        return l;
    }

public:
    int firstBadVersion(int n) { return rec(1, n); }
};