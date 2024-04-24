class Solution {
public:
    int maxProfit(vector<int>& p, int fee) {
        int b = -1e9, s{};
        for (auto i : p) {
            b = max(b, s - i);
            s = max(s, b + i - fee);
        }
        return s;
    }
};