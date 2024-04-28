class Solution {
public:
    string restoreString(string s, vector<int>& t) {
        string ans(t.size(), '0');
        for(int i = 0; i < s.size(); ++i) {
            ans[t[i]] = s[i];
        }
        return ans;

    }
};