class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> A(127);
        vector<int> B(127);
        int n = s.size();

        for (int i = 0; i < n; ++i) {
            if (A[s[i]] != B[t[i]])
                return false;
            A[s[i]] = i + 1;
            B[t[i]] = i + 1;
        }
        return true;
    }
};