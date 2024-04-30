class Solution {
public:
    bool squareIsWhite(string s) {
        if(!(s[0]&1) && !(s[1]&1)) return false;
        if ((s[0]&1) && (s[1]&1)) return false;
        return true;
    }
};