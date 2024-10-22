class Solution {
    vector<std::string> ans;


    void bctr(int n, int l, int r, string cur) {
        if(n * 2 == cur.size()) {
            ans.emplace_back(move(cur));
            return;
        }

        if(l < n){
            bctr(n, l + 1, r, cur + '(');
        }
        if(r < l) {
            bctr(n, l, r + 1, cur + ')');
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        bctr(n, 0, 0, "");
        return ans;
    }
};