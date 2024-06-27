class Solution {
    vector<vector<int >> ans;
    vector<int>dp, nums;

    void bkg(int ind) {
        ans.emplace_back(dp);

        for(int i = ind; i < nums.size(); ++i) {
            if(i > ind && nums[i] == nums[i-1]) continue;

            dp.push_back(nums[i]);
            bkg(i+1);
            dp.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        this->nums = move(nums);
        bkg(0);
        return ans;
    }
};