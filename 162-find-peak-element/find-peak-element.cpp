class Solution {
    int rec(vector<int>& a, int l, int r) {
        if (l == r)
            return l;

        int m = l + (r - l) / 2;
        if (a[m] > a[m + 1])
            return rec(a, l, m);
        else
            return rec(a, m + 1, r);
    }

public:
    int findPeakElement(vector<int>& a) {
         return rec(a, 0, a.size()-1); }
};