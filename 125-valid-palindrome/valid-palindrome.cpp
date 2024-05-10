class Solution {
public:
    bool isPalindrome(string s) {
        for (int l = 0, r = s.size() - 1; l <= r; ++l, --r) {
            if (!isalnum(s[r]))--l;
            else if (!isalnum(s[l]))++r;
            else if (tolower(s[l]) != tolower(s[r]))
                return false;
        }
        return true;
    }
    
};
