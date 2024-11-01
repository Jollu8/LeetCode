class Solution {
public:
    
    string makeFancyString(string s) {
        return regex_replace(s, regex("(.)\\1\\1+"), "$1$1");
    }
};