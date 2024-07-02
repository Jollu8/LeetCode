class Solution {
    vector<vector<int>> ans;
    vector<int> nums;

    void bkg(int ind) {
        if (ind == nums.size() - 1) {
            ans.emplace_back(nums);
            return;
        }

        unordered_set<int> np;

        for (int i = ind; i < nums.size(); ++i) {
            if (!np.contains(nums[i])) {
                swap(nums[i], nums[ind]);
                bkg(ind + 1);
                swap(nums[i], nums[ind]);
                np.insert(nums[i]);
            }
        }
    }

public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        this->nums = move(nums);
        bkg(0);
        return ans;
    }
};