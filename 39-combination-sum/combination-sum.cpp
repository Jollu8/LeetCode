class Solution {
public:
    vector<vector<int>> ans;
    
    void backtrack(vector<int>& nums, vector<int>& path, int i, int t) {
        if (!t) {
            ans.emplace_back(path);
            return;
        }
        if (i == nums.size() || t - nums[i] < 0)
            return;

        path.push_back(nums[i]);
        backtrack(nums, path, i, t - nums[i]);
        path.pop_back();
        backtrack(nums, path, i + 1, t);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& nums, int t) {
        sort(nums.begin(), nums.end());
        vector<int> path;
        backtrack(nums, path, 0, t);
        return ans;
    }
};
