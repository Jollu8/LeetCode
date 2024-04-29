class Solution {
public:
    string reversePrefix(string A, char ch) {
        auto f = find(A.begin(), A.end(), ch);
        if (f != A.end()) {
            auto n = distance(A.begin(), f);
            reverse(A.begin(), A.begin() + n + 1);
        }
        return A;
    }
};