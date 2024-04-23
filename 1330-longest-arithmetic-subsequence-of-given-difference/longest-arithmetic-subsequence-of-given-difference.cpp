class Solution {
public:
    int longestSubsequence(vector<int>& a, int d) {
        unordered_map<int, int> dp;
        for(auto& i : a) dp[i] = dp[i - d] + 1;
        return max_element(dp.begin(), dp.end(), []( auto& p1, auto& p2) {return p1.second < p2.second;})->second;
    }
};