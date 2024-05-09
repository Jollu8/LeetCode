class Solution {
public:
    int countPrefixes(vector<string>& A, string s) {
        return count_if(A.begin(), A.end(), [&](auto &a) {return s.starts_with(a);});
    }
};