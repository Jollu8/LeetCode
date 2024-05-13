class Solution {
public:
    string largestGoodInteger(string s) {
        string ans;
        for(auto i = 2; i < s.size(); ++i) {
            if(s[i-1] == s[i-2] && s[i] == s[i-1] && s[i] == s[i-2]) ans = max(ans,  string() + s[i-2] + s[i-1] + s[i]);
        }
        return ans;
    }
};