class Solution {
public:
    int timeRequiredToBuy(vector<int>& n, int k) {
        int x{};
        for (int i = 0; i <= k; ++i)
            x += min(n[k], n[i]);

        for (auto i = k+1; i < n.size(); ++i)
            x += min(n[k] - 1, n[i]);
        return x;
    }
};