class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans{};
        sort(nums.begin(), nums.end());
        for(int l{}, r = nums.size()-1; l < r; ++l, --r) {
            ans = max(ans, nums[l] + nums[r]);
        }
        return ans;
    }
};