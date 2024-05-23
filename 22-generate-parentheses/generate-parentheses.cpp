class Solution {
    vector<string> ans;
    int n;

    void dfs(int i, int j, string tmp) {
        if (tmp.size() == n * 2)
            ans.emplace_back(tmp);

        if (i < n)
            dfs(i + 1, j, tmp + "(");
        if (j < i)
            dfs(i, j + 1, tmp + ")");
    }

public:
    vector<string> generateParenthesis(int n) {
        this->n = n;
        dfs(0, 0, "");
        return ans;
    }
};