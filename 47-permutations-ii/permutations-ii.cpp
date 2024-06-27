class Solution {
    vector<vector<int>> ans;
    unordered_map<int, int> mp;
    vector<int> nums;
    void dfs(vector<int> &dp) {
        if(dp.size() == nums.size()) {
            ans.emplace_back(dp);
            return;
        }

        for(auto &[a, freq] : mp) {
            if(!freq) continue ;
            --freq;
            dp.push_back(a);
            dfs(dp);
            dp.pop_back();
            ++freq;
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& A) {
        for(auto i  : A) mp[i]++;
        this->nums = move(A);
        vector<int> dp;
        dfs( dp);
        return ans;
    }
};