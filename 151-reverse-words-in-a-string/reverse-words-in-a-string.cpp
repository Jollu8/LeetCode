class Solution {
public:
    string reverseWords(string s) {
        string ans, tok;
        ans.reserve(s.size());
        stringstream ss(s);
        while (ss >> tok) ans  = tok + " "  + ans;
        
        ans.pop_back();
        return ans;
    }
};
