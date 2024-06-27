class Solution {
    vector<vector<int>> ans;
    vector<int> nums;

    void dfs(int ind) {
        if (ind == nums.size()) {
            ans.emplace_back(nums);
            return;
        }

        for (int i = ind; i < nums.size(); ++i) {
            swap(nums[i], nums[ind]);
            dfs(ind + 1);

            swap(nums[i], nums[ind]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& A) {
        this->nums = move(A);
        dfs(0);
        return ans;
    }
};