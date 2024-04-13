class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.empty())
            return 0;
        int prev1 = 0, prev2 = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int temp = prev2;
            prev2 = max(prev2, prev1 + nums[i]);
            prev1 = temp;
        }
        return prev2;
    }
};