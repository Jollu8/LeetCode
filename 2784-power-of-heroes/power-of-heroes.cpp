class Solution {
public:
    int sumOfPower(vector<int>& nums) {
        long long res = 0, sum = 0, mod = 1e9 + 7;
        sort(begin(nums), end(nums));
        for (int i = 0; i < nums.size(); ++i) {
            res = (res + (sum + nums[i]) * nums[i] % mod * nums[i]) % mod;
            sum = (sum * 2 + nums[i]) % mod;
        }
        return res;
    }
};