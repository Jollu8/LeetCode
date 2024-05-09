class Solution {


void radixSortDescending(vector<int>& h) {
    if (h.empty()) return;
    int max_value = *max_element(h.begin(), h.end());
    vector<vector<int>> buckets(10);
    for (int divisor = 1; divisor <= max_value; divisor *= 10) {
        for (int element : h) {
            int digit = (element / divisor) % 10;
            buckets[digit].push_back(element);
        }
        h.clear();
        for (int digit = 9; digit >= 0; --digit) {
            h.insert(h.end(), buckets[digit].begin(), buckets[digit].end());
            buckets[digit].clear();
        }
    }
}

public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        radixSortDescending(h);
        long long ans = h[0];
        int cnt = 1;
        --k;
        for (int i = 1; i < h.size() && k > 0; ++i) {
            if ((long long)h[i] - cnt > 0) {
                ans += h[i] - cnt;
                ++cnt;
                --k;
            }
        }
        return ans;
    }
};