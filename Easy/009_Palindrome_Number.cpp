#include <string>
#include <algorithm>

class Solution {
public:
    bool isPalindrome(int x) {
        auto s = std::to_string(x);
        std::reverse(s.begin(), s.end());
        return std::to_string(x) == s;
    }
};