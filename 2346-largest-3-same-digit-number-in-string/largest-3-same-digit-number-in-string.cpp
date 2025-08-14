class Solution {
public:
    string largestGoodInteger(string s) {
        char ans = 0;
        for(auto i = 2; i < s.size(); ++i) {
            if(s[i-1] == s[i-2] && s[i] == s[i-1] ) ans = max(ans,  s[i]);
        }
        return ans == 0 ? "" : string(3, ans);
    }
};
