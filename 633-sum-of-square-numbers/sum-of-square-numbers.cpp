class Solution {
public:
    bool judgeSquareSum(int c) {
        long long cur;
        for(long long l = 0, r = sqrt(c); (cur = l*l + r*r) != c && l <= r; cur < c ? ++l : --r);
        return cur == c;
    }
};