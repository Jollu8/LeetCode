class Solution {
public:
    int maxProfit(vector<int>& prices) {
        auto buy1 = INT_MIN, buy2 = INT_MIN, sell1 = 0, sell2 = 0;
        for (auto p : prices) {
            buy1 = max(buy1, -p);
            sell1 = max(sell1, buy1 + p);
            buy2 = max(buy2, sell1 - p);
            sell2 = max(sell2, buy2 + p);
        }
        return sell2;
    }
};