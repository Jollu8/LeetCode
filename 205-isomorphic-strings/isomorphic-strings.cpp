class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> A(127), B(127);

        for(int i = 0 ; i < s.size(); ++i) {
            if(A[s[i]] != B[t[i]]) return false;
            A[s[i]] = i+1;
            B[t[i]] = i+1;
        }
        return true;
    }
};