class Solution {
    int n;
    vector<string>ans;
    void backtrack(int l , int r, string cur){
        if(cur.size() == n*2)ans.emplace_back(cur);
        if(l < n) backtrack(l+1, r, cur + "(");
        if(r < l) backtrack(l, r+1, cur + ")");
    }
public:
    vector<string> generateParenthesis(int n) {
        this->n = n;
        backtrack(0, 0, "");
        return ans;
    }
};