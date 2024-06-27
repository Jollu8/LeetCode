class Solution {
    vector<vector<int>> ans;
    vector<int> dp;
    vector<int> nums;

    void bkg(int ind, int target) {
        if (ind == nums.size()) {
            if (!target)
                ans.emplace_back(dp);
            return;
        }

        if (nums[ind] <= target) {
            dp.push_back(nums[ind]);
            bkg(ind, target - nums[ind]);
            dp.pop_back();
        }

        bkg(ind + 1, target);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        nums = move(candidates);
        bkg(0, target);
        return ans;
    }
};