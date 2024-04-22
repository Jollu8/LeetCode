class Solution {
public:
    string longestCommonPrefix(vector<string> &s) {
        if(s.size() == 1) return s[0];
        std::string ans = s[0];

        for (auto i = 1; i < s.size(); ++i) {
            string tmp;
            int n = (s[0].size() > s[i].size()) ? s[i].size() : s[0].size();
            for (auto j = 0; j < n; ++j) {
                if (s[0][j] == s[i][j])
                    tmp.push_back(s[0][j]);
                else break;
            }
            if (ans.size() > tmp.size())
                ans = tmp;
        }
        return ans;
    }
};