class Solution {
    bool is_palin(string& s) {
        for (int l = 0, r = s.size() - 1; l < r && r > l; ++l, --r) {
            if (s[l] != s[r])return false;
        }
        return true;
    }

public:
    string longestPalindrome(string s) {
        string ans;
        for (int l = 0; l < s.size() - 1; ++l) {
            for (int r = l + 1; r < s.size(); ++r) {
                if (s[l] == s[r]) {
                    auto tmp = s.substr(l, r - l + 1);
                    if (is_palin(tmp) && ans.size() < tmp.size())
                        ans = tmp;
                }
            }
        }
        if (ans.empty()) {
            ans = s[0];
            return ans;
        }
        return ans;
    }
};
