class Solution {
    string r;
    vector<vector<int>> buf;

    int memo(string &s, int i, int j) {
        if (i >= s.size() || j >= s.size()) return 0;
        if (buf[i][j] != -1) return buf[i][j];
        if (s[i] == r[j]) buf[i][j] = 1 + memo(s, i + 1, j + 1);
        else buf[i][j] = max(memo(s, i + 1, j), memo(s, i, j + 1));
        return buf[i][j];
    }

public:
    int longestPalindromeSubseq(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        r = move(rev);

        buf = vector(s.size(), vector<int>(s.size(), -1));
        return memo(s, 0, 0);
    }
};