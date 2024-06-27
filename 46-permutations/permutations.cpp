class Solution {
    vector<vector< int>> ans;
    void backtrack(vector<int> &nums,  vector<int> &cur, unordered_set<int> &np) {
        if(cur.size() == nums.size()) {
            ans.emplace_back(cur);
            return;
        }

        for(int i = 0; i < nums.size(); ++i) {
            if(!np.contains(nums[i])) {
                np.insert(nums[i]);
                cur.emplace_back(nums[i]);
                backtrack(nums,  cur, np);
                np.erase(cur.back());
                cur.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> cur;
        unordered_set<int> np;
        backtrack(nums, cur, np);
        return ans;
    }
};