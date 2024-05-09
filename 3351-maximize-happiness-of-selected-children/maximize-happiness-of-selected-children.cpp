class Solution {


void radixSortDescending(vector<int>& h) {
    if (h.empty()) return;

    // Find the maximum value in the vector
    int max_value = *max_element(h.begin(), h.end());

    // Create buckets for each digit (0 to 9)
    vector<vector<int>> buckets(10);

    // Distribute elements into buckets based on their most significant digit (MSD)
    for (int divisor = 1; divisor <= max_value; divisor *= 10) {
        for (int element : h) {
            int digit = (element / divisor) % 10;
            buckets[digit].push_back(element);
        }

        // Clear the vector to prepare for the next digit
        h.clear();

        // Gather elements back into the vector from buckets in reverse order
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