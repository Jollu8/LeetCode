class Solution {
public:
    bool isAcronym(vector<string>& w, string s) {
        if(w.size() != s.size()) return false;
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] != w[i][0]) return false;
        }
        return true;
    }
};