class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l{}, r{};
        for(int cnt = 1; r < nums.size(); ++r) {
            if(!nums[r])--cnt;
            if(cnt < 0 && !nums[l++])++cnt;
        }
        return r - l - 1;
    }
};