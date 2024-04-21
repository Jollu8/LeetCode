class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, INT_MIN);
        dp[0] = nums[0];
        int m = nums[0];
        int sum = nums[0];

        for(int i = 1; i < n; ++i) {
            sum += nums[i];
            int tmp = nums[i];
            dp[i] = max(sum, nums[i]);
            m = max(m, dp[i]);
            if(dp[i] == tmp) sum = dp[i];
        }
        return m;
    }
};