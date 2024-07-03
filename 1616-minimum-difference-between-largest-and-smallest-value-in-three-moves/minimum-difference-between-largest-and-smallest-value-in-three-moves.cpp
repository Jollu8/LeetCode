class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if (n <= 4) return 0;

        nth_element(nums.begin(), nums.begin() + 4, nums.end());
        vector<int> small(nums.begin(), nums.begin() + 4);
        sort(small.begin(), small.end());

        nth_element(nums.begin(), nums.begin() + 4, nums.end(), greater<>());
        vector<int> big(nums.begin(), nums.begin() + 4);
        sort(big.begin(), big.end());

        int min_diff = INT_MAX-1;
        for (int i = 0; i <= 3; ++i) {
            min_diff = min(min_diff, big[i] - small[i]);
        }
        return min_diff;
    }
};