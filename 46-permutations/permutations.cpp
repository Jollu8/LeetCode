class Solution {
    vector<vector<int>> ans;
    void backtrack(vector<int>& vec, int n) {
        if (n == vec.size()) {
            ans.emplace_back(vec);
            return;
        }
        for (int i = n; i < vec.size(); ++i) {
            swap(vec[i], vec[n]);
            backtrack(vec, n + 1);
            swap(vec[i], vec[n]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        backtrack(nums, 0);
        return ans;
    }
};