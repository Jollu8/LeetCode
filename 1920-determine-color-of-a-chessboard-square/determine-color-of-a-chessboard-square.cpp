class Solution {
public:
    bool squareIsWhite(string s) {
        return (s[0]+s[1])%2;
    }
};