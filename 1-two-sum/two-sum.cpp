class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        unordered_map<int, int> mp;
        for(int i{}; i < nums.size(); ++i) {
            int cur = t - nums[i];
            if(mp.contains(cur)) {
                return {mp[cur], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};