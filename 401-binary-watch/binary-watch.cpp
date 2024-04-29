class Solution {
public:
    vector<string> readBinaryWatch(int n) {
        vector<string> ans;
        int mask = 1 << 10;
        for(int i = 0; i < mask; ++i) {
            if(__builtin_popcount(i) == n) {
                int h = i >> 6;
                int m = (h << 6)^i;
                if(h < 12 && m < 60) ans.emplace_back(to_string(h) + ((m < 10) ? ":0" : ":") + to_string(m));
            }
        }
        return ans;
    }
};