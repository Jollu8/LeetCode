class Solution {
public:
    int findMin(vector<int>& n) {
        int l = 0;
        for (int r = n.size() - 1; l < r;) {
            int m = l + (r - l) / 2;
            l = (n[m] > n[r]) ? m + 1 : l;
            r = (n[m] < n[r]) ? m : (n[m] == n[r]) ? r - 1 : r;
        }

        return n[l];
    }
};