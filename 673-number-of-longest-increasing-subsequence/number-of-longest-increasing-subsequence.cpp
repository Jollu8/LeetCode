class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> len(n, 1);
        auto count = len;
        int m = INT_MIN;
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < i; ++j) {
                if(nums[i] > nums[j]) {
                    if(len[j]+1 > len[i]) {
                        len[i] = len[j]+1;
                        
                        count[i] = 0;
                    }if(len[j]+1 == len[i]) count[i] += count[j];
                }
            }
            m = max(m, len[i]);
        }
        int ans{};
        for(auto i = 0; i < n; ++i) {
            if(len[i] == m) ans += count[i];
        }
        return ans;
    }
};