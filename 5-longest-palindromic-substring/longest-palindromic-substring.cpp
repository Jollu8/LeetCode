class Solution {
    bool is_palin(string &s) {
        for (int l = 0, r = s.size() - 1; l < r && r > l; ++l, --r) {
            if (s[l] != s[r])return false;
        }
        return true;
    }

public:
    string longestPalindrome(string s) {
        string ans;
        for (int i = 0; i < s.size()-1; ++i) {
            for (int j = i + 1; j < s.size(); ++j) {
                if (s[i] == s[j]) {
                    auto tmp = s.substr(i, j - i + 1);
                    if (ans.size() < tmp.size() && is_palin(tmp)) ans = tmp;
                }
            }
        }
        if (ans.empty()) return {s[0]};
        return ans;
    }
};