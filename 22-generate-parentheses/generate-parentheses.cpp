class Solution {
    vector<string> ans;
    int n;
    void backtrack(int i, int j, string s) {
        if (s.size() ==  n * 2)
            ans.emplace_back(s);
        if (i < n)
            backtrack(i + 1, j, s + "(");
        if (j < i)
            backtrack(i, j + 1, s + ")");
    }

public:
    vector<string> generateParenthesis(int n) {
        this->n = n;
        backtrack(0, 0, "");
        return ans;
    }
};