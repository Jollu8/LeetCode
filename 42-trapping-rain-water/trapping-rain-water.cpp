class Solution {
public:
    int trap(vector<int>& h) {
        int l {}, r = h.size()-1, lev{}, water{};
        while(l < r) {
            int low = h[h[l] < h[r] ? l++ : r--];
            lev = max(lev, low);
            water += lev - low;
        }
        return water;
    }
};