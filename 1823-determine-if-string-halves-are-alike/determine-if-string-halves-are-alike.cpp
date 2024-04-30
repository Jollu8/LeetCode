class Solution {
public:
    bool halvesAreAlike(string s) {
        set<int> u {'a','e','o','u','i'};
        int a{}, b{};
        int n = s.size()/2;

        for(int i{}, j = n; i < n && j < s.size(); ++i , ++j) {
            a += (u.contains(tolower(s[i]))) ? 1 : 0;
            b += (u.contains(tolower(s[j]))) ? 1 : 0;
        }
        return a == b;
        
    }
};