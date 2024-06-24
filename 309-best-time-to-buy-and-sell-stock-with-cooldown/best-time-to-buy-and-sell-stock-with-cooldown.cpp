#include <vector>
#include <climits>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int buy = INT_MIN, prev_buy, sell{}, prev_sell{}, n = prices.size();

        for(int i = 0; i < n; ++i) {
            prev_buy = buy;
            buy = max(prev_sell - prices[i], buy);
            prev_sell = sell;
            sell = max(prev_buy + prices[i], sell);
        }
        return sell;
    }
};