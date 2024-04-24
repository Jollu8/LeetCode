class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> ans;
        for(auto i : nums) {
            auto f = lower_bound(ans.begin(), ans.end(), i);
            if(f == ans.end()) ans.push_back(i);
            else *f = i;
        }
        return ans.size();
        
    }
};