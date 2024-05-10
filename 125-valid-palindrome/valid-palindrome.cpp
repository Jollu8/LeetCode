class Solution {
public:
    bool isPalindrome(string s) {
        for (int l = 0, r = s.size() - 1; l <= r, r >= l; ++l, --r) {
            if (!isalpha(s[r]) && !isdigit(s[r]))
                --l;
            else if (!isalpha(s[l]) && !isdigit(s[l]))
                ++r;
            else if (tolower(s[l]) != tolower(s[r]))
                return false;
        }
        return true;
    }
    
};
