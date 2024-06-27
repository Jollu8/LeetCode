class Solution {
    vector<vector<int>> ans;
    vector<int> dp;
    vector<int> nums;

    void bkg(int ind, int target) {
        if (0 == target) {
            ans.emplace_back(dp);
            return;
        }
        // if(nums[ind] > target) return;
        for (int i = ind; i < nums.size(); ++i) {
            if (i > ind && nums[i] == nums[i - 1])
                continue;

            if (nums[i] > target)
                break;

            dp.push_back(nums[i]);
            bkg(i + 1, target - nums[i]);
            dp.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        nums = move(candidates);
        bkg(0, target);
        return ans;
    }
};