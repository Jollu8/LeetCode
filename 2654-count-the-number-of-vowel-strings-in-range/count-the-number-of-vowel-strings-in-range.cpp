class Solution {
public:
    int vowelStrings(vector<string>& A, int l, int r) {
        unordered_set<char> u{'a','o', 'i', 'e', 'u'};
        return count_if(A.begin() + l, A.begin() + r+1, [&](auto &s) {
            return u.contains(s[0]) && u.contains(s.back());
        });
        
    }
};