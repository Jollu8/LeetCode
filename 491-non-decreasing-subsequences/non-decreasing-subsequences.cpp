class Solution {
    vector<int> nums;
    vector<int> dp;
    set<vector<int>> ans;

    void bkg(int ind) {

        if (ind == nums.size()) {
            if (dp.size() > 1)
                ans.insert(dp);
            return;
        }

        for (int i = ind; i < nums.size(); ++i) {
            if (dp.empty() || dp.back() <= nums[ind]) {
                dp.push_back(nums[ind]);
                bkg(i + 1);
                dp.pop_back();
            }
        }

        bkg(ind + 1);
    }

public:
    vector<vector<int>> findSubsequences(vector<int>& A) {
        this->nums = move(A);
        bkg(0);

        return vector(ans.begin(), ans.end());
    }
};