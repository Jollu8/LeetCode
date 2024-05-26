class Solution {
public:
    int maxProfit(vector<int>& p) {
        int stock{};
        for(int m = p[0], i = 1; i < p.size(); ++i) {
            stock = max(stock, p[i] - m);
            m = min(m, p[i]);
        }
        return stock;
    }
};