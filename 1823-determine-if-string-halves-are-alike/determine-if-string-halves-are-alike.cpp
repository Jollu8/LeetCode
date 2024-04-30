class Solution {
public:
    bool halvesAreAlike(string s) {
        set<int> u {'a','e','o','u','i'};
        int a = count_if(s.begin(), s.begin()+s.size()/2, [&](auto c) {return u.contains(tolower(c));});
        int b = count_if(s.begin() + s.size()/2, s.end(), [&](auto c) {return u.contains(tolower(c));});
        
        return a == b;
        
    }
};