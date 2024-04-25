
class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector<pair<int, int>> dp; // (pow, val)
        for (int i = lo; i <= hi; ++i)
            dp.emplace_back(getPow(i), i);
        nth_element(dp.begin(), dp.begin() + k - 1, dp.end());
        return dp[k - 1].second;
    }

private:
    int getPow(int n) {
        if (n == 1) return 0;
        return 1 + (n % 2 == 0 ? getPow(n / 2) : getPow(n * 3 + 1));
    }
};
