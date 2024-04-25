class Solution {
public:
    int longestIdealString(string s, int k) {
        vector<int> dp(26);
        if (k == 26) return s.size();

        for (char ch: s) {
            int index = ch - 'a';
            int start = max(0, index - k);
            int end = min(26, index + k + 1);
            int maxElement = *max_element(begin(dp) + start, begin(dp) + end);
            dp[index] = 1 + maxElement;
        }

        return *max_element(begin(dp), end(dp));
    }

};