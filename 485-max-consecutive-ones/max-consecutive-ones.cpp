class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans{};
        int cnt{};
        for (int r = 0; r < nums.size(); ++r) {
            if ((nums[r] & 1))
                ++cnt;
            if (!(nums[r] & 1)) {
                ans = max(ans, cnt);
                cnt = 0;
            }
        }

        return max(ans, cnt);
    }
};