class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans{};
        for (int i = 1; i <= nums.size(); ++i) ans ^= i;
        for (int n: nums) ans ^= n;
        return ans;
    }
};